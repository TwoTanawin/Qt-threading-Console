
#include "examplethreads.h"
#include <QDebug>

examplethreads::examplethreads(QString threadName)
    : name{threadName}
{

}

void examplethreads::run(){
    for (int i = 0; i < 100; ++i) {
        qDebug() << name << " " << i;

        this->msleep(10);
    }
}
