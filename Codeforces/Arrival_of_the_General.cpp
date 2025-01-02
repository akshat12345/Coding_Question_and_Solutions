#include<bits/stdc++.h>
#define A 1
using namespace std;

int solve(vector<int> arr){
	int n = arr.size();
	int max_ele = arr[0],max_ind = 0,min_ele = arr[0], min_ind = 0;
	for(int i = 1;i < n;i++){
		if(max_ele < arr[i]){
			max_ele = arr[i];
			max_ind = i;
		}
		if(min_ele >= arr[i]){
			min_ele = arr[i];
			min_ind = i;
		}
	}
	int total_swaps = (max_ind - 0) + ((n-1) - min_ind);
	if(min_ind < max_ind)
		total_swaps = total_swaps - 1;
	return total_swaps;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}

	int ans = solve(arr);

	cout << ans << endl;

	return 0;
}