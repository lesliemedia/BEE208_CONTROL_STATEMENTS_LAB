#include <iostream>
using namespace std;
int main() {
    double v;
    for(int i = 1; i <= 10; i++) {
        cout << "Enter voltage " << i << " (V): ";
        cin >> v;
        if(v < 10.5) {
            cout << "Low battery detected. Test stopped." << endl;
            break;
        } else {
            cout << "Battery voltage normal" << endl;
        }
    }
    return 0;
}
