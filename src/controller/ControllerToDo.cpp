
#include "ControllerToDo.h"
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <QString>
#include <QDebug>

ControllerToDo::ControllerToDo() {
    model = new ToDoModel;
    view = new mainwindow;
    connect(view->getUI()->add_task, &QPushButton::clicked, this, &ControllerToDo::addNewTask);

    connect(model, &ToDoModel::onModelUpdated,
        this, &ControllerToDo::onModelUpdated);

    view->show();
}
void ControllerToDo::addNewTask() {

    QString added_task = view->getUI()->task->text();
    model->AddTask(added_task); // нові дані у модель
}

void ControllerToDo::onModelUpdated() { // відмальовує новий вью
    view->getUI()->tasks->clear();
    for (auto &el : model->getTasks()) {
        view->getUI()->tasks->addItem(el.getTaskName());
    }
}