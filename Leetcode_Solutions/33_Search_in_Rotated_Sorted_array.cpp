#include<bits/stdc++.h>
// #define A 1
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size(),l = 0,h = n-1;
    int mid;
    while(l < h){
        mid = l + (h - l)/2;
        cout << mid << endl;
        if(nums[mid] == target) return mid;
        else if(nums[l] < nums[mid]){
            if(target >= nums[l] and target < nums[mid]){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }else{
            if(target > nums[mid] and target <= nums[h]){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
    }
    return -1;
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

	int target ;
	cin >> target;

	int res = search(arr,target);

	cout << "Ind " << res << endl;	

	return 0;
}