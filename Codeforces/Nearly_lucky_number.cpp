#include<bits/stdc++.h>
#define A 1
using namespace std;

bool check_nearly_lucky_number(string n){
	int count = 0;
	for(int i = 0;i < n.size();i++){
		if((n[i] - '0') == 4 or (n[i] - '0') == 7) count++;
	}
	return count == 4 or count == 7;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string n;
	cin >> n;
	bool res = check_nearly_lucky_number(n);
	if(res) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}