#include<bits/stdc++.h>
#define A 1
using namespace std;

int solve(vector<int> arr){
	sort(arr.begin(),arr.end());
	int mini = INT_MAX;
	for(int i = arr[0];i <= arr[2];i++){
		mini = min(mini,abs(arr[0] - i) + abs(arr[1] - i) + abs(arr[2] - i));
	}
	return mini;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> arr(3);
	for(int i = 0;i < 3;i++)
		cin >> arr[i];

	int res = solve(arr);
	cout << res << endl;

	return 0;
}
