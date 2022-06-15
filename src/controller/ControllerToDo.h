#ifndef TODOLISTPROBE_CONTROLLERTODO_H
#define TODOLISTPROBE_CONTROLLERTODO_H
#include <QString>
#include <QObject>
#include <QWindow>
#include <model/ToDoModel.h>
#include <ui/mainwindow.h>
#include <ui/dialogaddingwindow.h>
#include <ui/infodialogwindow.h>
#include <model/ToDoItem.h>

class ControllerToDo : public QWindow {
    Q_OBJECT
public:
    ControllerToDo();

private:
    ToDoModel *model;
    mainwindow *main_window;
    dialogaddingwindow *dialog_adding_window;

private slots:
    void addNewTask();
    void onModelUpdated();
    void closeWindow();
    void completeTask();
};

#endif //TODOLISTPROBE_CONTROLLERTODO_H
