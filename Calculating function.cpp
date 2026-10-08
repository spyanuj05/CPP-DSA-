#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a;
    cin >> a;
    
    if (a % 2 == 0) {
        cout << a / 2 << "\n";
    } else {
        cout << -((a + 1) / 2) << "\n";
    }
    
    return 0;
}
