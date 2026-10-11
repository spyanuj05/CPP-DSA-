#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a ;
	cin>>a ;
	a[0]= (char)toupper(a[0]);
	cout<<a;
}
