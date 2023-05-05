
#ifndef EXAMPLETHREADS_H
#define EXAMPLETHREADS_H

#include <QThread>



class examplethreads : public QThread
{
public:
    explicit examplethreads(QString threadName);

    void run();
private:
    QString name;
};

#endif // EXAMPLETHREADS_H
