#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //////////////////////////////////////////////////////////////////////////////////////
    MainWindow w;       // mainwindow is from the mainwindow.h header file
    w.show();
    //////////////////////////////////////////////////////////////////////////////////////
    return app.exec();
}
