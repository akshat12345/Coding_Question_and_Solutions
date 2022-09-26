#include<bits/stdc++.h>

using namespace std;

int max_crossing_subarray(vector<int>& a, int low,int mid, int high){
	int left_max = INT_MIN, right_max = INT_MIN, sum = 0;
	for(int i = mid ; i >= low;i--){
		sum += a[i];
		if(sum > left_max)
			left_max = sum;
	}
	sum = 0;
	for(int i = mid + 1;i <= high;i++){
		sum += a[i];
		if(sum > right_max)
			right_max = sum;
	}
	return left_max + right_max;
}

int max_sum_subarray(vector<int>& a, int low, int high){

	if(low == high)
		return a[low];
	else{
		int mid = (low + high)/2;
		int lss = max_sum_subarray(a,low,mid);
		int rss = max_sum_subarray(a,mid+1,high);
		int css = max_crossing_subarray(a,low,mid,high);
		if(lss  >= rss && lss >= css)
			return lss;
		else if(rss  >= lss && rss >= css)
			return rss;
		return  css;
	}

}

int maxSubArray(vector<int>& nums) {
    int count = max_sum_subarray(nums , 0 , nums.size() - 1);
	return count;    
}

int main () {
	vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
	cout << maxSubArray(a);
	return 0;
}