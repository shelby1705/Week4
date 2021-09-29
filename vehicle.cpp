#include "vehicle.h"
using namespace std;

vehicle::vehicle() :vehicle(0, 0) {}

//Beginning of function
void vehicle::printVehicle() {

    cout << "Number of wheels: " << numWheels << endl;
    cout << "Number of doors: " << numDoors << endl;

}//End of function

 //Constructors
  vehicle::vehicle(int w, int d) {
    numWheels = w;
    numDoors = d;
    cout << "In constructor with 2 parameters" << endl;
}//End of constructor a


   //Copy constructor
   vehicle::vehicle(vehicle& copy) : vehicle(copy.numWheels, copy.numDoors) { //This seems right idk
   }//End of constructor

   //Copy by reference
   vehicle::vehicle(vehicle* copy) {
       this->numWheels = copy->numWheels;
       this->numDoors = copy->numDoors;
   }//End 
