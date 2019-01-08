#ifndef ZMINTERVAL_H
#define ZMINTERVAL_H
#include <ctime>
namespace ZM {


class ZMInterval
{
    time_t duration;
    char name;
    bool locked;
public:
    ZMInterval();
};
}
#endif // ZMINTERVAL_H
