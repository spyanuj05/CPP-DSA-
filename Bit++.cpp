#include <iostream>

using namespace std;

int main() {
	int a;
	cin>>a ;
	string y ;
	int x = 0; 
	for(int i = 0 ; i<a ; i++){
		cin>>y;
		if ( y[1]=='+'){
			x++;
		}else {
			x--;
		}
	}
	cout<<x<<endl;

    
}
