
// You may need to build the project (run Qt uic code generator) to get "ui_dialogaddingwindow.h" resolved

#include "dialogaddingwindow.h"
#include "ui_dialogaddingwindow.h"

dialogaddingwindow::dialogaddingwindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::dialogaddingwindow) {
    ui->setupUi(this);
}

Ui::dialogaddingwindow *dialogaddingwindow::getUI() {
    return ui;
}

dialogaddingwindow::~dialogaddingwindow() {
    delete ui;
}

