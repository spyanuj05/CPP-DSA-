#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    string text;
    
    for (int i = 0; i < a; i++) {
        cin >> text;
        
        if (text.length() > 10) {
            // Added () to text.length() on the last index lookup
            cout << text[0] << text.length() - 2 << text[text.length() - 1] << endl;
        } else {
            cout << text << endl;
        }
    }
    
    return 0;
}
