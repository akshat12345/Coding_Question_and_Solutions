#include<bits/stdc++.h>
// #define A 1
using namespace std;

int waysToSplitArray(vector<int>& nums) {
    int n = nums.size();
    vector<long long> sum_arr(n,0);
    long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += 1ll * nums[i];
        sum_arr[i] = sum;
    }
    int count = 0;
    for(int i = 0;i < n-1;i++){
        if(sum_arr[i] >= (sum - sum_arr[i]))
            count++;
    }
    return count;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++)
		cin >> arr[i];

	int res = waysToSplitArray(arr);
	cout << "Ans -> " << res << endl;

	return 0;
}