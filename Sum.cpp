#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    while(a--){
    	int b,c,d;
    	cin>>b>>c>>d;
    	if( b+c == d || c+d == b || b+d == c){
    		cout<<"YES"<<"\n";
		}else {
			cout<<"NO"<<"\n";
		}
	}

    
}
