#include <QApplication>

#include "TriangleDialog.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TriangleDialog triangleDialog("Triangle app");
    triangleDialog.show();

    return QApplication::exec();
}