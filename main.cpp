#include "login.h"
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a QMainWindow to contain your Login widget
    QMainWindow mainWindow;

    // Create an instance of Login
    Login loginWidget;

    // Set the Login widget as the central widget of the MainWindow
    mainWindow.setCentralWidget(&loginWidget);

    // Show the MainWindow
    mainWindow.show();

    return a.exec();
}
