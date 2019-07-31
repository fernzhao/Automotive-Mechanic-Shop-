#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Car: public Vehicle{

    public:
        Car(string ma, string mo, string col, int y, int m);

        void toString(string&);

    private:

};

#endif
