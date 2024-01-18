#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>

#include "simulation.h"
#include "marketoverview.h"
#include "marketsmembers.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTabWidget* tbw_mainTabs;
    void setupUI();

    Simulation* simTab;
    MarketOverview* marketTab;
    MarketsMembers* mMembersTab;
};
#endif // MAINWINDOW_H
