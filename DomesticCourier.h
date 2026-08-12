#ifndef DOMESTIC_COURIER_H
#define DOMESTIC_COURIER_H

#include <iostream>
#include "Receiver.h"  
using namespace std;

class DomesticCourier {
private:
    int trackingID;
    Receiver receiver;

public:
    void input() {
        cout << "Enter Tracking ID: ";
        cin >> trackingID;
        receiver.input();
    }

    void display() {
        cout << "Tracking ID: " << trackingID << endl;
        receiver.display();
    }

    int getID() const {
        return trackingID;
    }
};

#endif

