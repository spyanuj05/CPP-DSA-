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
		if ( (b[0]-'0'+b[1]-'0'+b[2]-'0') == (b[3]-'0'+b[4]-'0'+b[5]-'0')){
			cout<<"YES"<<'\n';
			
		}else{
			cout<<"NO"<<'\n';
		}
	}
	

    
}
