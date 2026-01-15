//
// Created by Owen ANCELOT on 15/01/2026.
//

#include "mapcanvasview.hpp"
#include <QPainter>

MapCanvasView::MapCanvasView(QWidget *parent) : QWidget(parent) {
    viewModel = new MapViewModel();
}

MapCanvasView::~MapCanvasView() {
    delete viewModel;
}

void MapCanvasView::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);

    painter.setBrush(Qt::blue);
    painter.drawEllipse(50, 50, 10, 10);
}
