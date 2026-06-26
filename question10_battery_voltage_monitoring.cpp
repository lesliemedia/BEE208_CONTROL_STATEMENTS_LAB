#include <iostream>
using namespace std;
int main() {
    double v;
    cout << "Enter battery voltage (V): ";
    cin >> v;
    while(v >= 12) {
        cout << "Voltage OK: " << v << " V" << endl;
        cout << "Enter battery voltage (V): ";
        cin >> v;
    }
    cout << "Battery voltage low. Recharge required." << endl;
    return 0;
}
