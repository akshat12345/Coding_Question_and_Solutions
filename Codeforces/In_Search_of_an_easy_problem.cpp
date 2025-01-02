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
	bool flag = true;
	for(int i = 0;i < n;i++){
		int temp;
		cin >> temp;
		if(temp == 1) flag = false;
	}

	if(flag) cout << "Easy" << endl;
	else cout << "Hard" << endl;

	return 0;
}