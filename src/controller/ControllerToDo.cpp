#include "ControllerToDo.h"
#include <QListWidget>
#include <QPushButton>
#include <QString>
#include <QDebug>
#include <QFont>

ControllerToDo::ControllerToDo() {
    model = new ToDoModel;
    main_window = new mainwindow;

    connect(main_window->getQuitAction(), &QAction::triggered, qApp, QApplication::quit);
    connect(main_window->getNewFileAction(), &QAction::triggered, this, [this](){
        model->Clear();
    });

    connect(main_window->getUI()->add_task, &QPushButton::clicked, this, &ControllerToDo::addNewTask);

    connect(main_window->getUI()->complete_task, &QPushButton::clicked, this, &ControllerToDo::completeTask);

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
        auto item = new QListWidgetItem(el.getTaskName());
        if (el.isComplete()) {
            QFont font;
            font.setStrikeOut(true);
            item->setFont(font);
        }
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

QString ControllerToDo::setCrossOutTask(ToDoItem item) const {
    if (item.isComplete()) {
        auto *font = new QFont;
        font->setBold(true);
        font->setStrikeOut(true);
        return font->toString();
    } else return "";
}
