#include <iostream>
#include "DomesticCourier.h"
#include "FileManager.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n--- Courier Tracking System ---\n";
        cout << "1. Add Courier\n2. Display All\n3. Search\n4. Exit\nChoice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                DomesticCourier c;
                c.input();
                FileManager<DomesticCourier>::add(c);
            }
            else if (choice == 2) {
                FileManager<DomesticCourier>::display();
            }
            else if (choice == 3) {
                int id;
                cout << "Enter Tracking ID: ";
                cin >> id;
                DomesticCourier c;
                if (FileManager<DomesticCourier>::search(id, c))
                    c.display();
                else
                    cout << "Record not found\n";
            }
        }
        catch (exception& e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 4);

    return 0;
}
