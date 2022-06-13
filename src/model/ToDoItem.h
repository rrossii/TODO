#ifndef TODOLISTPROBE_TODOITEM_H
#define TODOLISTPROBE_TODOITEM_H
#include <QString>

class ToDoItem {
public:
    ToDoItem() = delete;
    ToDoItem(QString name);
    QString getTaskName() const;
    void Complete(){
        done = true;
    };
    bool isComplete() const {
        return done;
    }
private:
    QString taskName;
    bool done = false;
};


#endif //TODOLISTPROBE_TODOITEM_H
