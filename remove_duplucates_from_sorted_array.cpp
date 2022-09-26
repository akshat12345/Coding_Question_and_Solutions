#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

// vector<int> removeDuplicates(vector<int>& nums) {
// 	unordered_set<int> s;
// 	for (int i = 0; i < nums.size() - 1; i++) {
// 		// if (s.find(nums[i]) == s.end())
// 		// 	s.insert(nums[i]);
// 		// else {
// 		// 	cout << " inside else part i " << i << endl;
// 		int j = i + 1, cur_val = nums[i], count = 0;
// 		while (nums[j] == cur_val) {
// 			j++; count++;
// 		}
// 		// cout << " count value"
// 		nums.erase(nums.begin() + i, nums.begin() + i + count);
// 		// }
// 		// unordered_set<int> :: iterator itr;
// 		// cout << "set data ";
// 		// for (itr = s.begin(); itr != s.end(); itr++)
// 		// 	cout << (*itr) << " " ;
// 		// cout << endl;
// 	}
// 	return nums;
// }

int removeDuplicates(vector<int>& nums) {
	int prev = nums[0], prev_index = 0, count = 0, distinct = 1;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] != prev) {
			// cout << "inside if for index " << i << endl;
			distinct++;
			count = 0;
			nums[++prev_index] = nums[i];
			prev = nums[i];
		}
		else {
			// cout << "outside if for index " << i << endl;
			count++;
		}
	}
	return distinct;
}


int main() {
	vector<int> nums = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
	int k = removeDuplicates(nums);
	for (int i = 0; i < k; i++)
		cout << nums[i] << " ";
	return 0;
}