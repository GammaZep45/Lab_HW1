#include "login.h"
#include "./ui_login.h"
#include "Users.h"
#include "welcome.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    ui->errorlabel->setVisible(false);
}

login::~login()
{
    delete ui;
}

void login::on_login_button_clicked()
{

    QString enteredusername = ui->login_username_input->text();
    QString enteredpassword = ui->password_login_input->text();

    int userIndex = username->indexOf(enteredusername);

    if(userIndex != -1 && password[userIndex] == enteredpassword)
    {
        hide();
        welcome *welcomewindow = new welcome(this);
        welcomewindow->show();
    }
    else
    {
        ui->errorlabel->setVisible(true);
    }



}



void login::on_register_button_1_clicked()
{
    hide();
    register *registerwindow = new register;
    registerwindow.show();

}

