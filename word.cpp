#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a ;
	cin>>a ;
	int ct = 0 , cd = 0 ;
	for ( char &c : a){
		if (isupper(c)){
			ct++;	
		}else{
			cd++;
		}
    } 
    if ( cd>=ct){
    	for ( char &c :a){
    		c = tolower(c);
		}
		cout<<a;
	}else{
		for (char &c :a){
			c = toupper(c);
		}
		cout<<a;
	}
}
