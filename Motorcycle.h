#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H


#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include"Vehicle.h"
using namespace std;

class Motorcycle: public Vehicle{


    public:
        Motorcycle(string, string, string, int, int,bool);
        void toString(string& outStr);

    private:
        bool sideCar;
};

#endif
