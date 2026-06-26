#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1.Resistor 2.Capacitor 3.Diode 4.Transistor 5.LED\nEnter choice: ";
    cin >> choice;
    switch(choice) {
        case 1: cout << "Resistor: Used to limit current in a circuit" << endl; break;
        case 2: cout << "Capacitor: Stores electrical energy" << endl; break;
        case 3: cout << "Diode: Allows current in one direction" << endl; break;
        case 4: cout << "Transistor: Amplifies or switches signals" << endl; break;
        case 5: cout << "LED: Emits light when current flows" << endl; break;
        default: cout << "Invalid choice" << endl;
    }
    return 0;
}

