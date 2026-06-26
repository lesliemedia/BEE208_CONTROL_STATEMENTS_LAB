#include <iostream>
using namespace std;
int main() {
    double t, sum = 0; int count = 0;
    for(int i = 1; i <= 10; i++) {
        cout << "Enter temp " << i << " (C): ";
        cin >> t;
        if(t < 0) continue;
        sum += t; count++;
    }
    if(count > 0) cout << "Average = " << sum/count << " C" << endl;
    else cout << "No valid readings" << endl;
    return 0;
}
