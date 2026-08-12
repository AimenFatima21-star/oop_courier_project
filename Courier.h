

#ifndef COURIER_H
#define COURIER_H

#include "Trackable.h"
#include "Sender.h"
#include "Receiver.h"

class Courier : public Trackable {
protected:
    int trackingID;
    Sender sender;       // HAS-A (Composition)
    Receiver receiver;   // HAS-A
    char status[20];

public:
    Courier() {}
    virtual void input() = 0;
    virtual void display() const = 0;

    int getID() const { return trackingID; }
};

#endif
