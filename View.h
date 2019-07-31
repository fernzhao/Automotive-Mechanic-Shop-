#ifndef VIEW_H
#define VIEW_H

#include "Customer.h"
#include "Vehicle.h"
#include "Mechanic.h"
#include "LinkedList.h"


class View {

    public:
        void mainMenu(int&);
        void printCustomers(LinkedList<Customer>&) const;
        void pause() const;
        void promptUserInfo(string&, string&, string&, string&);
        void promptUserId(int&);
        void displayInvalid();
        void promptCarInfo(string&, string&, string&, int&, int&);
        void promptTruckInfo(string&, string&, string&, int&, int&,int&);
        void promptMotocycleInfo(string&, string&, string&, int&, int&,bool&);
        void promptVehicle(int, int&);
        void printMechanics(LinkedList<Mechanic>&) const;
        void promptVehicleInput(string&);
    private:
        int readInt() const;
};

#endif
