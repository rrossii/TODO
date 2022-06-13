
#ifndef TODOLISTPROBE_MAINWINDOW_H
#define TODOLISTPROBE_MAINWINDOW_H

#include <QWidget>
#include "ui_mainwindow.h" // -> mainwindow.ui


class mainwindow : public QWidget {
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    Ui::mainwindow* getUI();

    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
};


#endif //TODOLISTPROBE_MAINWINDOW_H
