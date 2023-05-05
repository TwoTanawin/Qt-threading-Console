
#include <QCoreApplication>
#include "examplethreads.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    examplethreads threadA("thread A");
    examplethreads threadB("thread B");
    examplethreads threadC("thread C");

    threadA.start();    // Run threads
    threadB.start();    // and seeing their parallel operation
    threadC.start();    // in the output qDebug

    return a.exec();
}
