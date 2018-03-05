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
        auto str = QDateTime::currentDateTime().toString();
        ui->currentTime->setText(str);
    });

    connect(timer, &QTimer::timeout,
            this, &kalendarz::onTimerTimeout);
    onTimerTimeout();
}

kalendarz::~kalendarz()
{
    delete ui;
}

void kalendarz::onTimerTimeout()
{
    auto str = QDateTime::currentDateTime().toString();
    ui->currentTime_2->setText(str);
}
