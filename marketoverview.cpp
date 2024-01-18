#include "marketoverview.h"

MarketOverview::MarketOverview(QWidget *parent)
    : QWidget{parent}
{
    setupUI();
}

void MarketOverview::updateMarketState()
{

}

void MarketOverview::setupUI()
{
    ly_main = new QVBoxLayout(this);
    ly_marketData = new QGridLayout();

    tbw_items = new QTableWidget();
    tbw_items->setColumnCount(2);
    tbw_items->setHorizontalHeaderLabels({"Name", "Amount"});

    tbw_prices = new QTableWidget();
    tbw_prices->setColumnCount(2);
    tbw_prices->setHorizontalHeaderLabels({"Name", "Price"});
    ly_marketData->addWidget(tbw_prices, 0,0);


    ly_marketData->addWidget(tbw_items, 0,1);

    ly_main->addLayout(ly_marketData);
}
