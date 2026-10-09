#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	cin>>a ;
	while(a--){
		cin>>b;
		vector<int> arr(b);
		for( int i = 0 ; i<b ; i++){
			cin>>arr[i];
		}
		int com ; 
		if ( arr[0]==arr[1]){
			com = arr[0];
		}else{
			com = arr[2];
		}
		
		for ( int i = 0 ; i<b ; i++){
			if(arr[i]!=com){
				cout<<i+1<<'\n';
				break;
			}
		}
    }
    return 0 ;
    
}
