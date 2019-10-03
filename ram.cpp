//ram cpp

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "ram.h"

//default constructor
ram::ram(){}

//dectructor
ram::~ram(){}

//set ram fnc
void ram::setRAMsize(int ramSize){
    RAMsize = ramSize;
}

int ram::getRAMsize(){
    return RAMsize;
}
