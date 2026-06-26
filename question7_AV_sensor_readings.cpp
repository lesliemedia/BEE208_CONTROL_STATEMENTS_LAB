#include <iostream>
using namespace std;
int main() {
    double v, sum = 0;
    for(int i = 1; i <= 5; i++) {
        cout << "Enter voltage " << i << " (V): ";
        cin >> v;
        sum += v;
    }
    cout << "Average voltage = " << sum/5 << " V" << endl;
    return 0;
}
