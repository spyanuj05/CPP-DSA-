#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int a;
	cin>>a;
	string b ;
	for ( int i = 0 ; i<a ; i++){
		cin>>b ;
		int sum = (b[0]-'0')+(b[2]-'0');
		cout<<sum<<endl;
    }

    return 0 ;
}
