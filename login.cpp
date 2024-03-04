#include "login.h"
#include "ui_login.h"
#include "user.h" // Include the user header
#include "welcomepage.h" // Include the WelcomePage header
#include "registerpage.h" // Include the RegisterPage header
#include <QWidget>
Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::Login)
{
    ui->setupUi(this); // This creates the widgets defined in Qt Designer

    // Initialize your UI components, including errorLabel
    errorLabel = ui->ErrorBar; // Assuming your label in the UI is named "ErrorBar"
    errorLabel->setVisible(false);  // Setting visibility to false initially

    // Other initialization code if needed
}

Login::~Login()
{
    delete ui; // Release the UI resources
}

void Login::on_Login_2_clicked()
{
    QString enteredUsername = ui->UsernameEntered->text();
    QString enteredPassword = ui->PasswordEntered->text();

    bool found = false;
    for(int i = 0; i < UsersCount; ++i)
    {
        if(usernames[i] == enteredUsername && passwords[i] == enteredPassword)
        {
            found = true;
            break;
        }
    }

    if(found)
    {
        // Successful login
        WelcomePage *welcomePage = new WelcomePage; // Create WelcomePage instance
        welcomePage->show(); // Show the WelcomePage
        this->close(); // Close the Login window
    }
    else
    {
        // Unsuccessful login
        errorLabel->setText("Error: Wrong username or password"); // Set error message
        errorLabel->setVisible(true); // Show the error label
    }
}

void Login::on_Register_clicked()
{
    // Show the RegisterPage
    RegisterPage *registerPage = new RegisterPage; // Create RegisterPage instance
    registerPage->setAttribute(Qt::WA_DeleteOnClose); // Set attribute to delete on close
    registerPage->show(); // Show the RegisterPage
}
