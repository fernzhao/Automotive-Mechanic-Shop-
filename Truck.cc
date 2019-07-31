#include <iomanip>
#include <iostream>
using namespace std;
#include "Truck.h"

Truck::Truck(string ma, string mo, string col, int y,int m,int a)
:Vehicle(ma,mo,col,y,m),axles(a){

}


void Truck::toString(string& outStr){
      ostringstream  make_model;
      make_model << this->getMake() << " " << this->getModel();
      ostringstream vehicleData;
      vehicleData << setw(7) <<"Truck:"<<setw(10)<< this->getColour() << " "
           << this->getYear() << " " << setw(17) << make_model.str() << " ("
           << this->getMilage() << "km)," <<axles<<" "<<"axles"<< endl;
      outStr +=vehicleData.str();

}
