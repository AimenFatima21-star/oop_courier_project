#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    string city;

public:
    Person() {}
    Person(string n, string c) : name(n), city(c) {}

    string getName() const { return name; }
    string getCity() const { return city; }
};

#endif

