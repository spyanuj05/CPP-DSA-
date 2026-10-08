#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	int ct = 0 ;
	int mx = 0 ;
	cin>>a ;
	while(a--){
		int b,c ;
		cin>>b>>c;
		ct -= b ;
		ct += c ;
		
		
		mx = max(mx,ct);
	}
	cout<<mx<<"\n";
}
