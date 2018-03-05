#ifndef KALENDARZ_H
#define KALENDARZ_H

#include <QMainWindow>

class QTimer;

namespace Ui {
class kalendarz;
}

class kalendarz : public QMainWindow
{
    Q_OBJECT

public:
    explicit kalendarz(QWidget *parent = 0);
    ~kalendarz();

private:
    Ui::kalendarz *ui;
    QTimer* timer;
};

#endif // KALENDARZ_H
