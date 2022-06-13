#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mainwindow) {
    ui->setupUi(this);

    QMenu *file;
    quit = new QAction("&Quit", this);
    new_file = new QAction("&New", this);
    quit->setShortcut(tr("Ctrl+Q"));
    new_file->setShortcut(tr("Ctrl+N"));

    file = menuBar()->addMenu("&File");
    file->addAction(quit);
    file->addAction(new_file);

}

mainwindow::~mainwindow() {
    delete ui;
}

Ui::mainwindow* mainwindow::getUI() {
    return ui;
}

QAction *mainwindow::getQuitAction() {
    return quit;
}

QAction *mainwindow::getNewFileAction() {
    return new_file;
}
