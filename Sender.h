#ifndef SENDER_H
#define SENDER_H

#include "Person.h"

class Sender : public Person {
public:
    Sender() {}
    Sender(string n, string c) : Person(n, c) {}
};

#endif

