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

bool check(vector<int>& nums) {
	int count = 0 , n = nums.size();
	for (int i = 0; i < n - 1; i++) {
		if (count <= 1) {
			if (nums[i] > nums[i + 1])
				count++;
		} else {
			return false;
		}
	}
	if (nums[0] < nums[n - 1])
		count++;
	if (count <= 1)
		return true;
	return false;
}

int main() {
	vector<int> nums = {2, 1, 3, 4};
	cout << check(nums);
	return 0;
}