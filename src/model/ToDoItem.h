//
// Created by rossii on 10.06.22.
//

#ifndef TODOLISTPROBE_TODOITEM_H
#define TODOLISTPROBE_TODOITEM_H
#include <QString>

class ToDoItem {
public:
    ToDoItem() = delete;
    ToDoItem(QString name);
    QString getTaskName() const;
private:
    QString taskName;
    bool done = false;
};


#endif //TODOLISTPROBE_TODOITEM_H
