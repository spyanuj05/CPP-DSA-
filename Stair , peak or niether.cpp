#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,d ;
	cin>>a ;
	while(a--){
		cin>>b>>c>>d;
		if ( b<c && c<d){
			cout<<"STAIR"<<'\n';
		}else if ( b<c && c>d){
			cout<<"PEAK"<<'\n';
		}else{
			cout<<"NONE"<<'\n';
		}
	}

    
}
