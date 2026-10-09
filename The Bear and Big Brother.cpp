#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	int ct = 0 ;
	cin>>a>>b ;
	while(b>=a){
		a *= 3;
		b *= 2;
		ct++;
	}
	cout<<ct;
}
