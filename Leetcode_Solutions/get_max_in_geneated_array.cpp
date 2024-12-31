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

int getMaximumGenerated(int n) {
	vector<int> nums(n + 1);
	int max = -1;
	if (n == 0 || n == 1)
		return 1;
	nums[0] = 0;
	nums[1] = 1;
	for (int i = 2; i < nums.size(); i++) {
		if (i % 2 == 0)
			nums[i] = nums[i / 2];
		else
			nums[i] = nums[(i - 1) / 2] + nums[(i - 1) / 2 + 1];
		if (nums[i] > max)
			max = nums[i];
	}
	// cout << " Array -> ";
	// for (int x : nums)
	// 	cout << x << " ";
	// cout << endl;
	return max;
}

int main() {
	cout << getMaximumGenerated(2);
	return 0;
}