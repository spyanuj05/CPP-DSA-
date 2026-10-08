#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    if (a % 2 == 0) {
        if (b <= (a / 2)) { 
            cout << (2 * b - 1) << endl; 
        } else {
            cout << (2 * (b - (a / 2))) << endl; 
        }
    } else {
        
        if (b <= ((a + 1) / 2)) {
            cout << (2 * b - 1) << endl; 
        } else {
            cout << (2 * (b - ((a + 1) / 2))) << endl; 
        }
    }

    return 0;
}
