#ifndef TODOLISTPROBE_CONTROLLERTODO_H
#define TODOLISTPROBE_CONTROLLERTODO_H
#include <QString>
#include <QObject>
#include <QWindow>
#include <model/ToDoModel.h>
#include <ui/mainwindow.h>
#include <ui/dialogaddingwindow.h>
#include <model/ToDoItem.h>

class ControllerToDo : public QWindow {
    Q_OBJECT
public:
    ControllerToDo();
    QString setCrossOutTask(ToDoItem item) const;

private:
    ToDoModel *model;
    mainwindow *main_window;
    dialogaddingwindow *dialog_adding_window;

private slots:
    void addNewTask();
    void onModelUpdated();
    void closeWindow();
    void completeTask();
    signals:
    void taskHasCompleted(QListWidgetItem *task_item);
};

#endif //TODOLISTPROBE_CONTROLLERTODO_H
