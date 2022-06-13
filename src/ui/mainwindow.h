
#ifndef TODOLISTPROBE_MAINWINDOW_H
#define TODOLISTPROBE_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include "ui_mainwindow.h" // -> mainwindow.ui


class mainwindow : public QMainWindow { // changed from QWidget
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    Ui::mainwindow* getUI();

    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
};


#endif //TODOLISTPROBE_MAINWINDOW_H
