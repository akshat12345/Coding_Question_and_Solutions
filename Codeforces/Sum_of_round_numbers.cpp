#include<bits/stdc++.h>
#define A 1
using namespace std;

void solve(int x){
	int terms = 0,digit,sum;
	int digith = 1;
	vector<int> ans;
	while(x){
		digit = x%10;
		if(digit != 0) {
			terms++;
			ans.push_back(digit*digith);
		}	
		digith = digith * 10;
		x = x/10;
	}
	cout << terms << endl;
	for(int i = 0;i < ans.size();i++)
		cout << ans[i] << " ";
	cout << endl;
	return ;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin >> t;

	while(t--){
		int x;
		cin >> x;
		solve(x);
	}
	
	return 0;
}