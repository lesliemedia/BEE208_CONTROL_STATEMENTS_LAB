#include <iostream>
using namespace std;
int main() {
    double current;
    cout << "Enter current (A): ";
    cin >> current;
    if (current > 10)
        cout << "Overload detected (A)" << endl;
    else
        cout << "Current is safe (A)" << endl;
    return 0;
}
