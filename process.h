//process header
#ifndef PROCESS_H
#define PROCESS_H


#include <istream>
#include <string>
#include <vector>
#include <queue>

class Process{
protected:
    int PID;
    bool CPU_USE;
    
public:
    Process();
    ~Process();
    void setPID(int currentPID);
    int getPID();
};
#endif
