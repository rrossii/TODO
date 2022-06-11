//
// Created by rossii on 10.06.22.
//

#include "ToDoItem.h"

ToDoItem::ToDoItem(QString name) : taskName(name) {}

QString ToDoItem::getTaskName() const {
    return taskName;
}
