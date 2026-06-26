#include <iostream>
using namespace std;
int main() {
    int choice; double v,i,t,p;
    do {
        cout << "\n1.Power 2.Resistance 3.Energy 4.Exit\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: cout << "V,I: "; cin >> v >> i; cout << "Power = " << v*i << " W\n"; break;
            case 2: cout << "V,I: "; cin >> v >> i; cout << "Resistance = " << v/i << " Ohms\n"; break;
            case 3: cout << "P,T: "; cin >> p >> t; cout << "Energy = " << p*t << " Wh\n"; break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid" << endl;
        }
    } while (choice!= 4);
    return 0;
}
