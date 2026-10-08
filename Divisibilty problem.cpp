#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a;
    
    while (a--) {
        cin >> b >> c;
        if (b % c == 0) {
            cout << 0 << '\n';
        } else {
            cout << c - (b % c) << '\n';
        }
    }
    
    return 0;
}

