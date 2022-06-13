#ifndef TODOLISTPROBE_TODOITEM_H
#define TODOLISTPROBE_TODOITEM_H
#include <QString>
#include <QLabel>

class ToDoItem {
public:
    ToDoItem() = delete;
    ToDoItem(QString name);
    QString getTaskName() const;
    void Complete();
    bool isComplete() const;
private:
    QString taskName;
    bool done = false;


};


#endif //TODOLISTPROBE_TODOITEM_H
