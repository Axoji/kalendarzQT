#include "kalendarz.h"
#include "ui_kalendarz.h"

kalendarz::kalendarz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kalendarz)
{
    ui->setupUi(this);
}

kalendarz::~kalendarz()
{
    delete ui;
}
