//
// Created by Owen ANCELOT on 15/01/2026.
//

#ifndef CARTOGRAPHER_MAINWINDOW_HPP
#define CARTOGRAPHER_MAINWINDOW_HPP

#include <QMainWindow>

#include "../map/mapcanvasview.hpp"


QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    MapCanvasView* canvasView;
};


#endif //CARTOGRAPHER_MAINWINDOW_HPP