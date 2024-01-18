#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUI();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUI()
{
    //main tabs layout
    tbw_mainTabs = new QTabWidget();
    setCentralWidget(tbw_mainTabs);

    simTab = new Simulation();
    marketTab = new MarketOverview();
    mMembersTab = new MarketsMembers();

    tbw_mainTabs->addTab(simTab, "Simulation");
    tbw_mainTabs->addTab(marketTab, "Market Overview");
    tbw_mainTabs->addTab(mMembersTab, "Market Members");

}

