#include "kalendarz.h"
#include "ui_kalendarz.h"

#include <chrono>

#include <QDateTime>
#include <QTimer>

kalendarz::kalendarz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kalendarz),
    timer{new QTimer(this)}
{
    ui->setupUi(this);

    timer->setInterval(std::chrono::seconds{1});
    timer->start();

    connect(timer, &QTimer::timeout, [this]{
        auto str = QTime::currentTime().toString();
        ui->str_time->setText(str);
    });
}

kalendarz::~kalendarz()
{
    delete ui;
}

