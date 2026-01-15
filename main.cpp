#include <QApplication>

#include "presentation/ui/mainwindow/mainwindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow{};
    mainWindow.show();
    return QApplication::exec();
}
