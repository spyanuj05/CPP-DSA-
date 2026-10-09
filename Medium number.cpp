#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d,e,f,g ;
	cin>>a ;
	while(a--){
		cin>>b>>c>>d;
		e = max({b,c,d});
		f = min({b,c,d});
		g = ( b+c+d)-e-f;
		cout<<g<<'\n';
	}
}
