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
    tbw_mMembers->setHorizontalHeaderLabels({"Name", "Profession"});


    ly_main->addWidget(tbw_mMembers);

}
