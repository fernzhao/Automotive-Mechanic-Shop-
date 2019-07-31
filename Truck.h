#ifndef TRUCK_H
#define TRUCK_H


#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include"Vehicle.h"
using namespace std;

class Truck: public Vehicle{

    public:
        Truck(string, string, string, int, int,int);


        void toString(string&);

    private:
        int axles;
};

#endif
