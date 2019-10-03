//Enis Tahiraj

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include "process.h"
#include "process.cpp"
#include "ram.h"
#include "ram.cpp"
#include "hdd.h"
#include "hdd.cpp"
#include "cpu.h"
#include "cpu.cpp"

void checkCommand(std::string getCommand, int diskAccessNumber);
int getDiskaccesNumber(std::string getCommand, int diskNr);
int convertAddress(std::string getCommand);

int main(){
    
    long ramSize;
    int pageSize, diskNr, currentPID = 1;
    std::string getCommand;
    
    std::cout << "How much RAM is there?" <<std::endl;
    std::cin >> ramSize;
    std::cout << "Whats the size of a page/frame?" <<std::endl;
    std::cin >> pageSize;
    std::cout << "How many HD are there?" <<std::endl;
    std::cin >> diskNr;
    
    std::cout<< ramSize <<" " <<pageSize <<" " << diskNr <<std::endl;
    
    Process init;
    init.setPID(currentPID);
    currentPID++;
    std::cout <<"before while" <<std::endl;
    while(true){
        std::cout <<"inside while" <<std::endl;
        getline (std::cin, getCommand);
        std::cout <<"after getline" <<std::endl;
        //int diskAccessNumber = getDiskaccesNumber(getCommand, diskNr);
        //std::cout <<"diskaccess number is" <<diskAccessNumber <<std::endl;
        //checkCommand(getCommand, diskAccessNumber);
    }
    
    
    return 0;
}

void checkCommand(std::string getCommand, int diskAccessNumber){
    if(getCommand == "A"){
        //create a new PCB(create cpp,header file, crea) proces and place at end of readyqueue
    }
    else if(getCommand.compare("Q") == 0){
        //move current running process to the end of readyqueue
    }
    else if(getCommand.compare("fork") == 0){
        //fork a cjild and place at the end of readyqueue
    }
    else if(getCommand.compare("exit") == 0){
        //exit the current running process and release memory.
    }
    else if(getCommand.compare("wait") == 0){
        //wait command...
    }
    else if(getCommand.compare(0,1,"d") == 0 && getCommand.compare(1,1," ") == 0 && diskAccessNumber != -1){
        //read/write to a file
    }
    else if(getCommand.compare(0,1,"D") == 0 && diskAccessNumber != -1){
        //finish work with hard disk
    }
    else if(getCommand.compare(0,1,"m") == 0 && getCommand.compare(1,1," ") == 0){
        int address = convertAddress(getCommand);
        std::cout <<address;
        //do whatever with the address
    }
    else if(getCommand.compare(0,1,"S") == 0 && getCommand.compare(1,1," ") == 0 && getCommand.compare(2,1,"r") == 0){
        //show what process is currently running
    }
    else if(getCommand.compare(0,1,"S") == 0 && getCommand.compare(1,1," ") == 0 && getCommand.compare(2,1,"i") == 0){
        //show ...
    }
    else if(getCommand.compare(0,1,"S") == 0 && getCommand.compare(1,1," ") == 0 && getCommand.compare(2,1,"m") == 0){
        //show ...
    }
    
}

//function that finds if the disk number exists
int getDiskaccesNumber(std::string getCommand, int diskNr){
    std::string numberString = getCommand.substr(2,1);
    std::stringstream convert(numberString);
    int k;
    convert >> k;
    if(k <= diskNr)
        return k;
    else
        return -1;
}


//convert the address string into an int
int convertAddress(std::string getCommand){
    std::string numberString = getCommand.substr(2);
    std::stringstream convert(numberString);
    int n;
    convert >> n;
    return n;
}

























