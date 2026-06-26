#include <iostream>
using namespace std;
int main() {
    double current = 0;
    while(current <= 10) {
        cout << "Enter current (A): ";
        cin >> current;
        if(current <= 10) cout << "Current safe: " << current << " A" << endl;
    }
    cout << "Overcurrent detected. Monitoring stopped." << endl;
    return 0;
}
