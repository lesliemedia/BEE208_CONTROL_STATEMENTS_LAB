#include <iostream>
using namespace std;
int main() {
    double load, total = 0;
    while(total <= 3000) {
        cout << "Enter appliance power (W): ";
        cin >> load;
        total += load;
    }
    cout << "Load limit exceeded. Total = " << total << " W" << endl;
    cout << "Do not add more appliances." << endl;
    return 0;
}
