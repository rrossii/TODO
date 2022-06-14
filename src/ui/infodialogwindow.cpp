#include "infodialogwindow.h"
#include "ui_infodialogwindow.h"


infodialogwindow::infodialogwindow(QWidget *parent) :
        QDialog(parent), ui(new Ui::infodialogwindow) {
    ui->setupUi(this);
}

infodialogwindow::~infodialogwindow() {
    delete ui;
}

Ui::infodialogwindow *infodialogwindow::getUI() {
    return ui;
}
