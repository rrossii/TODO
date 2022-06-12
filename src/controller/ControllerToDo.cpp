
#include "ControllerToDo.h"
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <QDialog>
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
    dialog_adding_window = new dialogaddingwindow;

    connect(dialog_adding_window->getUI()->cancel_button, &QPushButton::clicked, this, &ControllerToDo::closeWindow);
    connect(dialog_adding_window->getUI()->add_button, &QPushButton::clicked, this, [this]() {
        QString added_task = dialog_adding_window->getUI()->lineEdit->text();
        model->AddTask(added_task);
        dialog_adding_window->close();
    });
    dialog_adding_window->show();

}

void ControllerToDo::onModelUpdated() { // відмальовує новий вью
    view->getUI()->tasks->clear();

    for (auto &el : model->getTasks()) {
        view->getUI()->tasks->addItem(el.getTaskName());
    }
}

void ControllerToDo::closeWindow() {
    dialog_adding_window->close();
}
