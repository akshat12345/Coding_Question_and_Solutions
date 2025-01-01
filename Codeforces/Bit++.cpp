#include<bits/stdc++.h>
#define A 1
using namespace std;

int res = 0;

void solve(string input){
	int add = 0;
	for(int i = 0;i < input.size();i++){
		if(input[i] == '+'){
			add = 1;
			break;
		}				
	}
	if(add) res++;
	else res--;

	return;
}

int main(){
	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	string input;
	while(n--){
		cin >> input;
		solve(input);
	}
	cout << res;
	return 0;
}