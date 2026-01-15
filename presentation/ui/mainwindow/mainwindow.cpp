//
// Created by Owen ANCELOT on 15/01/2026.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.hpp"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    canvasView = new MapCanvasView(this);
    setWindowTitle(tr("Cartographer"));
}

MainWindow::~MainWindow() {
    delete canvasView;
}