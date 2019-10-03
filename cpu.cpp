//hcpu cpp

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "cpu.h"

//default constructor
CPU::CPU(){}

//destructor
CPU::~CPU(){}

//set currentRunning fnc
void CPU::setCurrentRunning(int currentPID){
    currentRunning = currentPID;
}

//get currentRunning fnc
int CPU::getCurrentRunning(){
    return currentRunning;
}
