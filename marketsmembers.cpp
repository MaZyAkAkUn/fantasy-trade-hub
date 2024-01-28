#include "marketsmembers.h"

MarketsMembers::MarketsMembers(QWidget *parent)
    : QWidget{parent}
{
//    mMembers;
    MMember* tmpMember = new MMember(this, "Joe Board", "Miner", true, 7);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Piter Oake", "Woodcutter", true, 9);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Rid Furnace", "Smelter", true, 13);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Smelly Iron", "Blacksmith", true, 19);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Cow Man", "Farmer", true, 8);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Linen Cottonsky", "Tailor", true, 12);
    mMembers.append(tmpMember);
    tmpMember = new MMember(this, "Wood Bricker", "Carpenter", true, 16);
    mMembers.append(tmpMember);

    for (int i = 0; i<10;i++){
        tmpMember = new MMember(this, "Citizen #" + QString::number(i), "Citizen", false, 6);
        mMembers.append(tmpMember);
    }
    setupUI();
}

void MarketsMembers::setupUI()
{
    ly_main = new QVBoxLayout(this);

    tbw_mMembers = new QTableWidget();


    ly_main->addWidget(tbw_mMembers);
    tbw_mMembers->setColumnCount(3);
    tbw_mMembers->setRowCount(17);
    tbw_mMembers->setHorizontalHeaderLabels({"Name", "Profession", "Money Amount"}); //add here a diferent set of characteristics
    int i = 0;
    for(auto const& marketMember: mMembers){
        tbw_mMembers->setItem(i, 0, new QTableWidgetItem(marketMember->name));
        tbw_mMembers->setItem(i, 1, new QTableWidgetItem(marketMember->profession));
        tbw_mMembers->setItem(i, 2, new QTableWidgetItem(QString::number(marketMember->getBalance())));
        //TODO: add advenced view with detailed needs showed
        i++;
    }

    ly_main->addWidget(tbw_mMembers);

}

MMember::MMember(QObject *parent): QObject{parent}
{

}

MMember::MMember(QObject *parent, QString name, QString prof): QObject{parent}, name{name}, profession{prof}
{

}

MMember::MMember(QObject *parent, QString name, QString prof, bool artisian, double money):
    QObject{parent}, name{name}, profession{prof}, artisian{artisian}, money{money}
{

}
