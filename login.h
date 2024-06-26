#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_button_clicked();

    void on_register_button_2_clicked();

    void on_register_button_1_clicked();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
