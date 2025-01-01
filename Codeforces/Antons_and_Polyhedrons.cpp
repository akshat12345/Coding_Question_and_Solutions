#include<bits/stdc++.h>
#define A 1
using namespace std;

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	map<string,int> mp;
	mp["Tetrahedron"] = 4;
	mp["Cube"] = 6;
	mp["Octahedron"] = 8;
	mp["Dodecahedron"] = 12;
	mp["Icosahedron"] = 20;
	int sum = 0;
	while(n--){
		string input;
		cin >> input;
		sum += mp[input];
	}
	cout << sum << endl;
	return 0;
}