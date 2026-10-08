#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	string b ;
	while(a--){
		cin>>b;
		if ( b == "yes"|| b == "YES"|| b == "Yes"|| b == "YEs"|| b == "yES"||b == "yEs"|| b == "yeS"|| b == "YeS"){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}

    
}
