#ifndef SIMULATION_H
#define SIMULATION_H

#include <QWidget>
#include <QPushButton>
#include <QFormLayout>
#include <QLabel>

enum SIM_STATUS{
    IDLE, RUNNED, PAUSED
};

//widget for simulation controls
class Simulation : public QWidget
{
    Q_OBJECT
public:
    explicit Simulation(QWidget *parent = nullptr);
private:
    void setupUI();
    QFormLayout* ly_main;
    QPushButton* pb_startSim;
    QPushButton* pb_pauseSim;
    QPushButton* pb_resetSim;
    QLabel* lb_simStatus;
    void setSimStatus(SIM_STATUS newStatus);

public slots:
    void updateSimulationState();//used for updating simulation state(called from ESE)
private slots:
    void startSimulation();
    void pauseSimulation();
    void resetSimulation();


signals:
    void startSimulationRequested();//forwarded to EconomicSimulationEngine
    void pauseSimulationRequested();
    void resetSimulationRequested();
};

#endif // SIMULATION_H
