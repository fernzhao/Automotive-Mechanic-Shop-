
#include <iomanip>
#include <iostream>
using namespace std;
#include "Car.h"

Car::Car(string ma, string mo, string col, int y,int m)
:Vehicle(ma,mo,col,y,m){

}

void Car::toString(string& outStr){
      ostringstream  make_model;
      make_model << this->getMake() << " " << this->getModel();
      ostringstream vehicleData;
      vehicleData<< "\t" << setw(7) <<"Car:"<<setw(10)<< this->getColour() << " "
           << this->getYear() << " " << setw(17) << make_model.str() << " ("
           << this->getMilage() << "km)" << endl;
      outStr +=vehicleData.str();

}
