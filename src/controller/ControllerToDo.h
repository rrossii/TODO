//
// Created by rossii on 10.06.22.
//

#ifndef TODOLISTPROBE_CONTROLLERTODO_H
#define TODOLISTPROBE_CONTROLLERTODO_H
#include <QString>
#include <QObject>
#include <QWindow>
#include <model/ToDoModel.h>
#include <ui/mainwindow.h>

class ControllerToDo : public QWindow {
    Q_OBJECT
public:
    ControllerToDo();

private:
    ToDoModel *model;
    mainwindow *view;

public slots:
    void addNewTask();
};


#endif //TODOLISTPROBE_CONTROLLERTODO_H
