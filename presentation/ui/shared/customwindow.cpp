//
// Created by Owen ANCELOT on 15/01/2026.
//

#include "customwindow.hpp"
#include <QScreen>
#include <QRect>

CustomWindow::CustomWindow(QWidget* parent) : QMainWindow(parent) {
}

CustomWindow::~CustomWindow() = default;

void CustomWindow::center() {
    const QScreen* screen = QGuiApplication::primaryScreen();
    const QRect screenGeometry = screen->geometry();
    const int x = (screenGeometry.width() - this->width()) / 2;
    const int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}