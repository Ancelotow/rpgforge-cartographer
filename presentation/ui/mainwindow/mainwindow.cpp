//
// Created by Owen ANCELOT on 15/01/2026.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.hpp"


MainWindow::MainWindow(QWidget *parent) : CustomWindow(parent) {
    canvasView = new MapCanvasView(this);
    setCentralWidget(canvasView);

    setWindowTitle(tr("Cartographer"));
    resize(800, 800);
    center();
}

MainWindow::~MainWindow() {
    delete canvasView;
}