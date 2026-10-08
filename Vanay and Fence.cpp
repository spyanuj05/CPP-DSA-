#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,ct = 0 ,cd = 0;
	cin>>a ;
	string b;
	cin>>b;
	for(char &c : b){
		if ( c == 'A'){
			ct++;
		}else{
			cd++;
		}
	}
	if ( ct>cd){
		cout<<"Anton";
		
	}else if ( ct == cd){
		cout<<"Friendship";
	}else{
		cout<<"Danik";
		
	}    
}
