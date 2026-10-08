#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ct = 0;
    int arr[a];
    
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < a; i++){
        if (arr[i] >= arr[b-1] && arr[i] > 0){
            ct++;
        }
    }
    
    cout << ct << endl;
    return 0;
}
