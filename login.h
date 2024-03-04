#ifndef LOGIN_H
#define LOGIN_H

#include "qlabel.h"
#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_Login_2_clicked();
    void on_Register_clicked();

private:
    Ui::Login *ui; // Pointer to the UI object
    QLabel *errorLabel; // Pointer to the error label
};

#endif // LOGIN_H
