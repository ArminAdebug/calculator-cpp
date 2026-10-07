#include <QApplication>
#include <QWidget>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;

    window.show();

    return app.exec();
}
