//
// Created by rossii on 10.06.22.
//

#include "ToDoModel.h"

void ToDoModel::AddTask(QString name) {
    ToDoItem x = ToDoItem(name);
    tasks.push_back(x);
    emit onModelUpdated();  // викликати(відправити) сигнал
}

const std::vector<ToDoItem> &ToDoModel::getTasks() const {
    return tasks;
}

void ToDoModel::CompleteTask(int index) {
    tasks[index].Complete();
    emit onModelUpdated();
}
