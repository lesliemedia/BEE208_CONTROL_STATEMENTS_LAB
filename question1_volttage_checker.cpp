#include <iostream>
using namespace std;

int main() {
    double voltage;
    cout << "Enter voltage (V): ";
    cin >> voltage;

    if (voltage < 0 || voltage > 230) {
        cout << "Invalid voltage (V)" << endl;
    } else if (voltage < 50) {
        cout << "Low voltage (V)" << endl;
    } else if (voltage < 200) {
        cout << "Normal voltage (V)" << endl;
    } else {
        cout << "High voltage (V)" << endl;
    }
    return 0;
} 
