#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Vehicle.h"

class VehicleFactory{
    public:
      Vehicle* create(string, string, string, int, int,int);
      Vehicle* create(string, string, string, int, int);
      Vehicle* create(string, string, string, int, int,bool);

    private:

};


#endif
