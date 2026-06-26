#include <iostream>
using namespace std;
int main() {
    int choice; double v,i,t;
    cout << "1.Power 2.Resistance 3.Energy\nEnter choice: ";
    cin >> choice;
    switch(choice) {
        case 1: cout << "Enter V,I: "; cin >> v >> i; cout << "Power = " << v*i << " W\n"; break;
        case 2: cout << "Enter V,I: "; cin >> v >> i; cout << "Resistance = " << v/i << " Ohms\n"; break;
        case 3: cout << "Enter P,T: "; cin >> v >> t; cout << "Energy = " << v*t << " Wh\n"; break;
        default: cout << "Invalid" << endl;
    }
    return 0;
}

