//process cpp

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "process.h"

//default constructor
Process::Process(){}

//destructor
Process::~Process(){}

//set PID fnc
void Process::setPID(int currentPID){
    PID = currentPID;
}

//get PID fnc
int Process::getPID(){
    return PID;
}
