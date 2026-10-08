#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b ;
	cin>>a ;
	int ct = 0 ;
	while(a--){
		cin>>b;
		if ( b == 1){
			ct++;
		}
	}
	if ( ct>=1){
		cout<<"HARD";
	}else{
		cout<<"EASY";
	}

    
}
