#include <iostream>
using namespace std;
#include <string>


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a ;
	cin>>a ;
	for(char &i : a ){
		if ( i=='H'|| i=='Q'||i=='9'){
			cout<<"YES";
			return 0 ;
		}
	}
	cout<<"NO";
	return 0 ;
	

    
}
