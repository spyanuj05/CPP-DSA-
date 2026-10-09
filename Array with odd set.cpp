#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b ;
		int ev = 0 ;
		int odd = 0 ;
		int ct = 0 ;
		int c ;
		for ( int i = 0 ;i<b ; i++){
			cin>>c ;
			if ( c%2==0){
				ev++;
			}else{
				odd++;
			}
			ct += c;
		}
		if ( ct%2!=0){
			cout<<"YES"<<'\n';
		}else if ( ev>0 && odd>0 ){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
	return 0 ;    
}
