
#include "ControllerToDo.h"
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <QString>

ControllerToDo::ControllerToDo() {
    view = new mainwindow();
    connect(view->getUI()->add_task, &QPushButton::clicked, this, &ControllerToDo::addNewTask);
    view->show();

}
void ControllerToDo::addNewTask() {

    QString added_task = view->getUI()->task->text();
    view->getUI()->tasks->addItem(added_task);

}