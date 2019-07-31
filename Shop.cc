#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "Shop.h"
#include "defs.h"

Shop::Shop() : numMechanics(0) { }

Shop::~Shop() {
    for (int i=0; i < numMechanics; i++)
        delete mechanics[i];
}


Shop& Shop::operator+=(Customer* c) {
    customers += c;
    return *this;
}

Shop& Shop::operator-=(Customer* c) {
    customers -= c;
    return *this;
}


Customer* Shop::getCustomer(int n)  {
    for (int i = 0; i < customers.getSize(); i++) {
        if (customers[i]->getId()==n){

            return customers[i];
        }
    }
    return 0;


}

LinkedList<Customer>& Shop::getCustomers() { return customers; }

Shop& Shop::operator+=(Mechanic* m) {
        if(numMechanics<MAX_MECHANICS){
        mechanics+= m;
      }
      return *this;
}

int Shop::getNumMechanics()     { return numMechanics; }


LinkedList<Mechanic>& Shop::getMechanics()  { return mechanics; }
