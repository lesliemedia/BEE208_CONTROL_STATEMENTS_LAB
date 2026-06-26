#include <iostream>
using namespace std;
int main() {
    int pass;
    cout << "Enter password: ";
    cin >> pass;
    while(pass!= 2080) {
        cout << "Access denied. Try again: ";
        cin >> pass;
    }
    cout << "Access granted to control panel" << endl;
    return 0;
}
