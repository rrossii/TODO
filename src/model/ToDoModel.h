//
// Created by rossii on 10.06.22.
//

#ifndef TODOLISTPROBE_TODOMODEL_H
#define TODOLISTPROBE_TODOMODEL_H
#include "ToDoItem.h"
#include <QObject>
#include <QVector>

class ToDoModel : public QObject{
    Q_OBJECT
public:
    void AddTask(QString name);
    const std::vector<ToDoItem>& getTasks() const;
    void CompleteTask(int index);
signals:
    void onModelUpdated();

private:
    std::vector<ToDoItem> tasks;
};

#endif //TODOLISTPROBE_TODOMODEL_H
