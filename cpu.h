//cpu header

#ifndef CPU_H
#define CPU_H


#include <iostream>
#include <string>
#include <vector>
#include <queue>

class CPU{
protected:
    int currentRunning;
public:
    CPU();
    ~CPU();
    std::queue<int> CPUreadyqueue;
    void setCurrentRunning(int currentPID);
    int getCurrentRunning();
    
};
#endif
