#include <iostream>
using namespace std;
int main() {
    int n; double r, total = 0;
    cout << "Enter number of resistors: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Enter R" << i << " (Ohms): ";
        cin >> r;
        total += r;
    }
    cout << "Total series resistance = " << total << " Ohms" << endl;
    return 0;
}
