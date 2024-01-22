#include "marketsmembers.h"

MarketsMembers::MarketsMembers(QWidget *parent)
    : QWidget{parent}
{
    setupUI();
}

void MarketsMembers::setupUI()
{
    ly_main = new QVBoxLayout(this);

    tbw_mMembers = new QTableWidget();


    ly_main->addWidget(tbw_mMembers);
    tbw_mMembers->setColumnCount(2);
    tbw_mMembers->setRowCount(17);
    tbw_mMembers->setHorizontalHeaderLabels({"Name", "Profession"}); //add here a diferent set of characteristics
    tbw_mMembers->setItem(0, 0, new QTableWidgetItem("Joe Board"));
    tbw_mMembers->setItem(0, 1, new QTableWidgetItem("Miner"));

    tbw_mMembers->setItem(1, 0, new QTableWidgetItem("Piter Oake"));
    tbw_mMembers->setItem(1, 1, new QTableWidgetItem("Woodcutter"));

    tbw_mMembers->setItem(2, 0, new QTableWidgetItem("Rid Furnace"));
    tbw_mMembers->setItem(2, 1, new QTableWidgetItem("Smelter"));

    tbw_mMembers->setItem(3, 0, new QTableWidgetItem("Smelly Iron"));
    tbw_mMembers->setItem(3, 1, new QTableWidgetItem("Blacksmith"));

    tbw_mMembers->setItem(4, 0, new QTableWidgetItem("Cow Man"));
    tbw_mMembers->setItem(4, 1, new QTableWidgetItem("Farmer"));

    tbw_mMembers->setItem(5, 0, new QTableWidgetItem("Linen Cottonsky"));
    tbw_mMembers->setItem(5, 1, new QTableWidgetItem("Tailor"));

    tbw_mMembers->setItem(6, 0, new QTableWidgetItem("Wood Bricker"));
    tbw_mMembers->setItem(6, 1, new QTableWidgetItem("Carpenter"));
    int startFrom = 7;
    for (int i = 0; i<10;i++){
        tbw_mMembers->setItem(startFrom+ i, 0, new QTableWidgetItem("Citizen #" + QString::number(i)));
        tbw_mMembers->setItem(startFrom+ i, 1, new QTableWidgetItem("Citizen"));
    }


    ly_main->addWidget(tbw_mMembers);

}
