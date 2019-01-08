#ifndef ZMTASK_H
#include <QVector>
#include <zmtask.h>
#define ZMTASK_H
namespace ZM {

class ZMTask
{
    QVector<ZmInterval> ZMInterval;
    char name;
    bool locked;
public:
    ZMTask();
};
}
#endif // ZMTASK_H
