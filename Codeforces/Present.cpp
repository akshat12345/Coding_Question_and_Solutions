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
	vector<int> res(n);
	for(int i = 0;i < n;i++){
		int temp;
		cin >> temp;
		res[temp-1] = i+1;
	}

	for(int i = 0;i < n;i++){
		cout << res[i] << " ";
	}

	return 0;
}