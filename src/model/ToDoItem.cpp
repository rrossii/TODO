#include "ToDoItem.h"
#include <QFont>

ToDoItem::ToDoItem(QString name) : taskName(name) {}

QString ToDoItem::getTaskName() const {
    return taskName;
}

void ToDoItem::Complete() {
    done = true;
}

bool ToDoItem::isComplete() const {
    return done;
}


