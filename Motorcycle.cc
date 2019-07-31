#include <iomanip>
#include <iostream>
using namespace std;
#include "Motorcycle.h"

Motorcycle::Motorcycle(string ma, string mo, string col, int y,int m,bool s)
:Vehicle(ma,mo,col,y,m),sideCar(s){

}


void Motorcycle::toString(string& outStr){
      ostringstream  make_model;
      make_model << this->getMake() << " " << this->getModel();
      ostringstream vehicleData;
      string sc;
//sideCar
      if(sideCar==true){
          sc="has sidecar";
      }
      else{
          sc="doesn't have sidecar";
      }
      vehicleData<< "\t" << setw(7) <<"Motorcycle:"<<setw(10)<< this->getColour() << " "
           << this->getYear() << " " << setw(17) << make_model.str() << " ("
           << this->getMilage() << "km)," <<sc<< endl;
      outStr +=vehicleData.str();

}
