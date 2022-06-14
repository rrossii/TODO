
#ifndef TODOLISTPROBE_MAINWINDOW_H
#define TODOLISTPROBE_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include "ui_mainwindow.h" // -> mainwindow.ui


class mainwindow : public QMainWindow { // changed from QWidget
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    Ui::mainwindow* getUI();
    QAction* getQuitAction();
    QAction* getNewFileAction();
    QAction* getAboutAction();

    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
    QAction *quit, *new_file, *about_program;;
};


#endif //TODOLISTPROBE_MAINWINDOW_H
