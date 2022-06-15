
#ifndef TODOLISTPROBE_INFODIALOGWINDOW_H
#define TODOLISTPROBE_INFODIALOGWINDOW_H

#include <QDialog>
#include "ui_infodialogwindow.h"


class infodialogwindow : public QDialog {
Q_OBJECT

public:
    explicit infodialogwindow(QWidget *parent = nullptr);

    ~infodialogwindow() override;
    Ui::infodialogwindow* getUI();

private:
    Ui::infodialogwindow *ui;
};


#endif //TODOLISTPROBE_INFODIALOGWINDOW_H
