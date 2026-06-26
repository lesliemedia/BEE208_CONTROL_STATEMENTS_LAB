#include <iostream>
using namespace std;
int main() {
    double i; int safe = 0, unsafe = 0;
    for(int k = 1; k <= 8; k++) {
        cout << "Enter current " << k << " (A): ";
        cin >> i;
        if(i <= 10) safe++; else unsafe++;
    }
    cout << "Safe: " << safe << ", Unsafe: " << unsafe << endl;
    return 0;
}
