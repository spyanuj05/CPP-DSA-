#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a ;
    cin>>a ;
    while(a--){
    	int b,c,d;
    	cin>>b>>c>>d;
    	if ( b ==c && c!=d ){
    		cout<<d<<"\n";
    		
		}else if ( c == d && b!=d){
			cout<<b<<"\n";
		}else {
			cout<<c<<"\n";
		}
		
	}
	return 0 ;
    

    
}
