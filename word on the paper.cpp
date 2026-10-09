#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	string b ;
	cin>>a ;
	while(a--){
		for(int i = 0 ; i<8 ;i++){
			cin>>b;
			for(char &c : b){
				if ( c!='.'){
					cout<<c;
				}
			}
		}
		cout<<'\n';
	}  
}
