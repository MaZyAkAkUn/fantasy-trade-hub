#include "simulation.h"

Simulation::Simulation(QWidget *parent)
    : QWidget{parent}
{
    setupUI();
}

void Simulation::setupUI()
{
    ly_main = new QFormLayout(this);

    lb_simStatus = new QLabel("IDLE");
    pb_startSim = new QPushButton("Start Simulation");
    pb_pauseSim = new QPushButton("Pause Simulation");
    pb_resetSim = new QPushButton("Reset Simulation");

    ly_main->addRow("Sim Status: ", lb_simStatus);
    ly_main->addRow("Start: ", pb_startSim);
    ly_main->addRow("Pause: ", pb_pauseSim);
    ly_main->addRow("Reset: ", pb_resetSim);



    connect(pb_startSim, &QPushButton::clicked, this, &Simulation::startSimulation);
    connect(pb_pauseSim, &QPushButton::clicked, this, &Simulation::pauseSimulation);
    connect(pb_resetSim, &QPushButton::clicked, this, &Simulation::resetSimulation);

}

void Simulation::setSimStatus(SIM_STATUS newStatus)
{
    switch (newStatus) {
    case IDLE:
        lb_simStatus->setText("IDLE");
        break;
    case RUNNED:
        lb_simStatus->setText("RUNNED");
        break;
    case PAUSED:
        lb_simStatus->setText("PAUSED");
        break;
    default:
        break;
    }
}

void Simulation::updateSimulationState()
{

}

void Simulation::startSimulation()
{
    setSimStatus(RUNNED);
}

void Simulation::pauseSimulation()
{
    setSimStatus(PAUSED);
}

void Simulation::resetSimulation()
{
    setSimStatus(IDLE);
}

