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
    void CompleteTask(int index);
    const std::vector<ToDoItem>& getTasks() const;
signals:
    void onModelUpdated();

private:
    std::vector <ToDoItem> tasks;
};

#endif //TODOLISTPROBE_TODOMODEL_H
