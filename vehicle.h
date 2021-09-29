// vehicle.h : Include file for standard system include files,
// or project specific include files.

#pragma once
#include <iostream>

//Class
class vehicle {

//Variables
private:
    int numWheels;
    int numDoors;

//Functions
public:
    vehicle();
    vehicle(int);   //Hopefully these two are right
    vehicle(int,int);

    //Destructor
    ~vehicle() {
    }//End of Destructor

    //Copy Constructor
    vehicle(vehicle&);

    //Copy Pointer
    vehicle(vehicle*);

    //New function called
    void printVehicle();

};//End of vehicle class
