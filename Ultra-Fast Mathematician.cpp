#include <iostream>
#include <vector>
using namespace std;
#include <string>
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string mat;
    string mats;
    cin>>mat>>mats;
    
    for ( int i = 0 ; i<mat.size();i++){
    	if ( mat[i]==mats[i]){
    		cout<<0;
		}else{
			cout<<1;
		}
	}
}
