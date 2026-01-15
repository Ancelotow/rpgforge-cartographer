//
// Created by Owen ANCELOT on 15/01/2026.
//

#ifndef CARTOGRAPHER_MAPCANVASVIEW_HPP
#define CARTOGRAPHER_MAPCANVASVIEW_HPP

#include <QWidget>

#include "mapviewmodel.hpp"


QT_BEGIN_NAMESPACE

namespace Ui {
    class MapCanvasView;
}

QT_END_NAMESPACE

class MapCanvasView : public QWidget {
    Q_OBJECT

public:
    explicit MapCanvasView(QWidget *parent = nullptr);

    [[nodiscard]] MapViewModel* getViewModel() const { return viewModel; }

    ~MapCanvasView() override;

private:
    MapViewModel *viewModel;
};


#endif //CARTOGRAPHER_MAPCANVASVIEW_HPP