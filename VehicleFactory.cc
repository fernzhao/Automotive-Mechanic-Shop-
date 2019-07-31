#include <iomanip>
#include <iostream>
using namespace std;
#include "VehicleFactory.h"
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y,int m){
    Vehicle* c=new Car(ma,mo,col,y,m);
    return c;
};
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y,int m,int a){
    Vehicle* t=new Truck(ma,mo,col,y,m,a);
    return t;
};

Vehicle* VehicleFactory::create(string ma, string mo, string col, int y,int m,bool s){
    Vehicle* moto=new Motorcycle(ma,mo,col,y,m,s);
    return moto;
};
