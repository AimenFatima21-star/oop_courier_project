#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
using namespace std;

class Receiver {
private:
    string name;
    string address;

public:
    void input() {
        cout << "Enter receiver name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }

    void display() {
        cout << "Receiver Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

#endif

