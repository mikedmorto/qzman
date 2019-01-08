#ifndef ZMPROJECT_H
#define ZMPROJECT_H
namespace ZM {

class ZMProject
{
        QVector<Zmtask> ZMTask;
        char name;
        bool locked;
public:
    ZMProject();
};
}
#endif // ZMPROJECT_H
