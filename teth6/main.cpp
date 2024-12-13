#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass classi;
    classi.raiseMySignal();

    return a.exec();
}
