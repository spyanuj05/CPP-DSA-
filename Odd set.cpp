#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a;
	while(a--){
		cin>>b ;
		int ct = 0 ;
		int cd = 0 ;
		for ( int i = 0 ; i<b*2 ; i++){
			cin>>c;
			if ( c%2 == 0 ){
				ct++;
			}else{
				cd++;
			}	
		}
		if ( ct == cd){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}	
	}
}
