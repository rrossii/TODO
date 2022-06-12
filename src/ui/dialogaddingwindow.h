//
// Created by rossii on 12.06.22.
//

#ifndef TODOLISTPROBE_DIALOGADDINGWINDOW_H
#define TODOLISTPROBE_DIALOGADDINGWINDOW_H

#include <QWidget>
#include "ui_dialogaddingwindow.h"

class dialogaddingwindow : public QWidget {
Q_OBJECT

public:
    explicit dialogaddingwindow(QWidget *parent = nullptr);
    Ui::dialogaddingwindow* getUI();

    ~dialogaddingwindow() override;

private:
    Ui::dialogaddingwindow *ui;
};


#endif //TODOLISTPROBE_DIALOGADDINGWINDOW_H
