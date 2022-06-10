//
// Created by rossii on 10.06.22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>

mainwindow::mainwindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainwindow) {
    ui->setupUi(this);
    
}

mainwindow::~mainwindow() {
    delete ui;
}

Ui::mainwindow* mainwindow::getUI() {
    return ui;
}
