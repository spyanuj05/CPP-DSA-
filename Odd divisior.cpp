#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	long long b ;
	cin>>a ;
	while(a--){
		cin>>b ;
		while(b%2==0){
			b /= 2;
		}
		if ( b>1){
			cout<<"YES"<<'\n';
		}else {
			cout<<"NO"<<'\n';
		}
	}  
}
