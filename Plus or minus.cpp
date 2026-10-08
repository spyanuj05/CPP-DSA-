#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a;
	int ct = 0 ;
	while(a--){
		cin>>b>>c;
		if ( c - b >= 2 ){
			ct++;
		}	
	}
	cout<<ct;

    
}
