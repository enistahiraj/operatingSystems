//hdd cpp

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "hdd.h"

//default constructor
HDD::HDD(){}

//destructor
HDD::~HDD(){}

//set HDD number fnc
void HDD::setHDDnumber(int diskNr){
    number = diskNr;
}

//get HDD number fnc
int HDD::getHDDnumber(){
    return number;
}
