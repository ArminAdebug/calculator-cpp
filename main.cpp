#include <QApplication>
#include <QWidget>
#include ".\source\ui_window.h"
using namespace Ui;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;

    MainWindow::Ui_MainWindow ui;
    ui.setupUi(&window);

    return app.exec();
}
