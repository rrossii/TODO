#ifndef TODOLISTPROBE_CONTROLLERTODO_H
#define TODOLISTPROBE_CONTROLLERTODO_H
#include <QString>
#include <QObject>
#include <QWindow>
#include <model/ToDoModel.h>
#include <ui/mainwindow.h>
#include <ui/dialogaddingwindow.h>

class ControllerToDo : public QWindow {
    Q_OBJECT
public:
    ControllerToDo();

private:
    ToDoModel *model;
    mainwindow *view;
    dialogaddingwindow *dialog_adding_window;

private slots:
    void addNewTask();
    void onModelUpdated();
    void closeWindow();
};

#endif //TODOLISTPROBE_CONTROLLERTODO_H
