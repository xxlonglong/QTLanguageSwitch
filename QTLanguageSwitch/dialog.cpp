#include "dialog.h"
#include "ui_dialog.h"
#include <QTranslator>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Btn_ToChs_clicked(bool checked)
{

}

void Dialog::on_Btn_ToChs_clicked()
{
    QTranslator m;
    m.load(":/Chinese.qm");
    qApp->installTranslator(&m);
    this->ui->retranslateUi(this);
}

void Dialog::on_Btn_ToEn_clicked()
{
    QTranslator m;
    m.load(":/English.qm");
    qApp->installTranslator(&m);
    this->ui->retranslateUi(this);
}
