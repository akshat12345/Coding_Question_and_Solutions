#include<bits/stdc++.h>
using namespace std;
#define A 1


long long solve(long long x){
	if(x == 9) return x;
	long long res = 0;
	int digit;
	vector<int> ans;
	while(x){
		digit = x%10;
		x = x/10;
		if((x != 0 or digit != 9) and (9 - digit) < digit) digit = 9 - digit;
		ans.push_back(digit);
	}
	reverse(ans.begin(),ans.end());
	
	for(int i = 0;i < ans.size();i++){
		res = res * 10 + ans[i];
	}
	return res;	
}
// INPUT 91730629
// OUTPUT 91230320
int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	long long x;
	cin >> x;
	long long res = solve(x);
	cout << res << endl;

	return 0;
}
