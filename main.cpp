#include <QApplication>
#include <QPushButton>
#include "src/controller/ControllerToDo.h"
#include "src/ui/mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ControllerToDo c;


    return QApplication::exec();
}
