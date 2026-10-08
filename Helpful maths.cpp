#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> b ;
	string a ;
	cin>>a ;
	for (int i = 0 ; i<a.length();i++){
		if ( a[i]!='+'){
			b.push_back(a[i]-'0');
		}
	}
	sort(b.begin(), b.end());
	for ( int i = 0 ; i<b.size() ; i++){
		cout<<b[i];
		if ( i < b.size() -1 ){
			cout<<"+";
		}
	}  
	return 0 ;  
}
