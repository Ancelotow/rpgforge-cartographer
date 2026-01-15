//
// Created by Owen ANCELOT on 15/01/2026.
//

#include "mapcanvasview.hpp"

MapCanvasView::MapCanvasView(QWidget *parent) : QWidget(parent) {
    viewModel = new MapViewModel();
}

MapCanvasView::~MapCanvasView() {
    delete viewModel;
}