#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <fstream>
#include <iostream>
using namespace std;

template <class T>
class FileManager {
public:
    static void add(const T& obj) {
        ofstream file("courier.dat", ios::binary | ios::app);
        if (!file) throw runtime_error("File error");
        file.write((char*)&obj, sizeof(obj));
        file.close();
    }

    static void display() {
        ifstream file("courier.dat", ios::binary);
        T obj;
        while (file.read((char*)&obj, sizeof(obj))) {
            obj.display();
        }
        file.close();
    }

    static bool search(int id, T& found) {
        ifstream file("courier.dat", ios::binary);
        while (file.read((char*)&found, sizeof(found))) {
            if (found.getID() == id) {
                file.close();
                return true;
            }
        }
        file.close();
        return false;
    }
};

#endif

