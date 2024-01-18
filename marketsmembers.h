#ifndef MARKETSMEMBERS_H
#define MARKETSMEMBERS_H

#include <QWidget>
#include <QPushButton>
#include <QFormLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QTableWidget>

class MMember : public QObject
{
    Q_OBJECT

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

signals:
    void newMemberAppears();//emited when added new market`s member
    void memberRemoved();//emited when market`s member exit from market

};

#endif // MARKETSMEMBERS_H
