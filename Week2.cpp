#include<iostream>
#include "vehicle.h"
using namespace std;

//Beginning of function
void CreateVehicle(vehicle& v, int w = 4, int d = 2) {
    v = vehicle(d, w);
}//End of function

//Main
int main(int argc, char** argv) {

    vehicle original;    //empty constructor no ( )
    vehicle copy(original); // copy constructor by reference
    vehicle secondCopy( &original ); //copy constructor by pointer
    copy.printVehicle ();
    CreateVehicle(copy, 2); //wheels is 2, everything else is default value
    copy.printVehicle();
    CreateVehicle(copy, 2, 3); //wheels is 2, doors is 3
    copy.printVehicle ();
    copy = secondCopy;
    copy.printVehicle();// copy is same as second copy
    return 0;
}//End of main

