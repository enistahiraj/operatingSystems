//harddisk header

#ifndef HDD_H
#define HDD_H


#include <istream>
#include <string>
#include <vector>
#include <queue>

class HDD{
    
protected:
    int number;
    
public:
    HDD();
    ~HDD();
    void setHDDnumber(int diskNr);
    int getHDDnumber();
};
#endif
