#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a ;
	cin>>a ;
	while(a--){
		int arr[4];
		for ( int i = 0 ; i<4 ; i++){
			cin>>arr[i];
		}
		int ct = 0 ;
		for ( int i = 0 ; i<4 ; i++){
			if ( arr[i]>arr[0]){
				ct++;
			}
		}
		cout<<ct<<'\n';;
	}

    
}
