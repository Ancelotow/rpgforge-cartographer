//
// Created by Owen ANCELOT on 15/01/2026.
//

#ifndef CARTOGRAPHER_CUSTOMWINDOW_HPP
#define CARTOGRAPHER_CUSTOMWINDOW_HPP
#include <QMainWindow>
#include <QWidget>

class CustomWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit CustomWindow(QWidget* parent);
    ~CustomWindow() override;

    void center();

};

#endif //CARTOGRAPHER_CUSTOMWINDOW_HPP