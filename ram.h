//ram header

#ifndef RAM_H
#define RAM_H


#include <istream>
#include <string>
#include <vector>
#include <queue>

class ram{
    
protected:
    int RAMsize;
    
public:
    ram();
    ~ram();
    void setRAMsize(int ramSize);
    int getRAMsize();
};
#endif
