//
// Created by Owen ANCELOT on 15/01/2026.
//

#include "mapcanvasview.hpp"
#include <QPainter>

#include "../../../domain/entities/environment.hpp"

MapCanvasView::MapCanvasView(QWidget *parent) : QWidget(parent) {
    viewModel = new MapViewModel();
}

MapCanvasView::~MapCanvasView() {
    delete viewModel;
}

void MapCanvasView::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);

    constexpr Color brown{139, 69, 19};
    constexpr Color green{34, 139, 34};
    Trace trunk;
    trunk.color = brown;
    trunk.points = {
        {100, 200},
        {100, 180},
        {100, 160},
        {100, 140}
    };

    Trace leaves;
    leaves.color = green;
    leaves.points = {
        {90, 140}, {110, 140},
        {85, 120}, {115, 120},
        {100, 100}
    };

    const std::vector treeTraces = {trunk, leaves};
    const Environment treeLayer(treeTraces);


    for (const auto&[points, color] : treeLayer.getTraces()) {
        painter.setPen(QPen(QColor(color.r, color.g, color.b), 2));
        for(size_t i=1; i < points.size(); ++i) {
            painter.drawLine(points[i-1].x, points[i-1].y, points[i].x, points[i].y);
        }
    }
}
