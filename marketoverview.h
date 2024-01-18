#ifndef MARKETOVERVIEW_H
#define MARKETOVERVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QFormLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QGridLayout>

//widget for general market`s overview, prices, graphs and so on
class MarketOverview : public QWidget
{
    Q_OBJECT
public:
    explicit MarketOverview(QWidget *parent = nullptr);

signals:
public slots:
    void updateMarketState();//used for updating info about current market state


private:
    void setupUI();
    QVBoxLayout* ly_main;
    QGridLayout* ly_marketData;

    QTableWidget* tbw_items;
    QTableWidget* tbw_prices;

};

#endif // MARKETOVERVIEW_H
