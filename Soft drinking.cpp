#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
  
    int drink_toasts = (k * l) / nl;
    int lime_toasts = c * d;
    int salt_toasts = p / np;
    
   
    cout << (min({drink_toasts, lime_toasts, salt_toasts})) / n << "\n";
    
    return 0;
}
