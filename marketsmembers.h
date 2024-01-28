#ifndef MARKETSMEMBERS_H
#define MARKETSMEMBERS_H

#include <QWidget>
#include <QPushButton>
#include <QFormLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QTableWidget>

class MItem{};

struct BasicMMNeds{
    double food = 0;
    double safety = 0;
    double clothes = 0;

    //    double shelter  = 0;
    //    double water = 0;
};

struct ProfessionalMMNeeds{
    double materials = 0;
    double tools = 0;
    double equipment = 0;
};

struct MMNeeds{
    BasicMMNeds basic;
    ProfessionalMMNeeds professional;
};


class MMember : public QObject
{
    Q_OBJECT
public:
    explicit MMember(QObject* parent = nullptr);
    explicit MMember(QObject* parent,
            QString name,
            QString prof);
    explicit MMember(QObject* parent,
            QString name,
            QString prof,
            bool artisian,
            double money);
    QString name;
    QString profession; //later makybe make class from it to cover stuff we need which

    bool artisian = false; //can we apply our craftmanships to make money
    double getBalance(){return money;};

private:
    MMNeeds needs; //needs which show what we need at this moment
    double money = 10.0; //money available for spending on market
    QList<MItem> inventory;//store all stuff we bought on market
    void doWork(); //consume raw materials, produce goods
    void fillNeed(); //adjust value of need(for ex when buy food, or weapon )

};

//widget for displaying market`s members
class MarketsMembers : public QWidget
{
    Q_OBJECT
public:
    explicit MarketsMembers(QWidget *parent = nullptr);

private:
    void setupUI();
    void addMember(); //MMember
    void removeMember();

    QVBoxLayout* ly_main;
    QTableWidget* tbw_mMembers;

    QList<MMember*> mMembers;

signals:
    void newMemberAppears();//emited when added new market`s member
    void memberRemoved();//emited when market`s member exit from market

};

#endif // MARKETSMEMBERS_H
