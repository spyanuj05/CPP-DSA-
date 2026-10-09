#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	int ct = 0 ;
	cin>>a ;
	string b ;
	while(a--){
		cin>>b ;
		if ( b == "Icosahedron"){
			ct +=20;
		}else if ( b == "Dodecahedron"){
			ct +=12;
		}else if ( b == "Octahedron"){
			ct +=8 ;
		}else if ( b == "Cube"){
			ct +=6 ;
		}else{
			ct +=4;
		}
	}
	cout<<ct ;

    
}
