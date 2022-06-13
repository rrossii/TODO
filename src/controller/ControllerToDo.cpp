#include "ControllerToDo.h"
#include <QListWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <QFont>

ControllerToDo::ControllerToDo() {
    model = new ToDoModel;
    main_window = new mainwindow;
    connect(main_window->getUI()->add_task, &QPushButton::clicked, this, &ControllerToDo::addNewTask);

    connect(main_window->getUI()->complete_task, &QPushButton::clicked, this, &ControllerToDo::completeTask);
    //connect(main_window->getUI()->tasks, &QListWidget::itemClicked, this, &ControllerToDo::selectTask);

//    connect(this, &ControllerToDo::taskHasCompleted, main_window->getUI()->tasks, [this](){
//        QFont *font = new QFont;
//        font->setBold(true);
//        font->setStrikeOut(true);
//        task_item->setFont(*font);
//    })
    connect(model, &ToDoModel::onModelUpdated,
        this, &ControllerToDo::onModelUpdated);

    main_window->setWindowTitle("TO-DO list");
    main_window->show();
}
void ControllerToDo::addNewTask() {
    dialog_adding_window = new dialogaddingwindow;

    connect(dialog_adding_window->getUI()->cancel_button, &QPushButton::clicked, this, &ControllerToDo::closeWindow);

    connect(dialog_adding_window->getUI()->add_button, &QPushButton::clicked, this, [this]() {
        QString added_task = dialog_adding_window->getUI()->lineEdit->text();
        model->AddTask(added_task);
        dialog_adding_window->close();
    });

    dialog_adding_window->setWindowTitle("Adding new task");
    dialog_adding_window->show();
}

void ControllerToDo::onModelUpdated() { // відмальовує новий вью
    main_window->getUI()->tasks->clear();

    for (auto &el : model->getTasks()) {
        auto item = new QListWidgetItem(el.getTaskName() + QString::fromStdString(el.isComplete() ? " [Complete]" : ""));
        main_window->getUI()->tasks->addItem(item);
    }
}

void ControllerToDo::closeWindow() {
    dialog_adding_window->close();
}


void ControllerToDo::completeTask() {
    if (!main_window->getUI()->tasks->selectedItems().empty()) {
        auto selectedItem = main_window->getUI()->tasks->selectedItems().front();
        int index = -1;
        for (int i = 0; i < main_window->getUI()->tasks->count(); i++) {
            if (selectedItem == main_window->getUI()->tasks->item(i)) {
                index = i;
                break;
            }
        }
        assert(index != -1);
        model->CompleteTask(index);
    }
}

void ControllerToDo::crossOutTask() {

}

//    connect(main_window->getUI()->complete_task, &QPushButton::clicked, this, [&task_item](){
//        QFont *font = new QFont;
//        font->setBold(true);
//        font->setStrikeOut(true);
//        task_item->setFont(*font);
//    });