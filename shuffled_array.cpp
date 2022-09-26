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

vector<int> shuffle(vector<int>& nums, int n) {
	vector<int> shuffled(2 * n);
	int count = 0, j = 0;
	for (int i = 0; i < 2 * n; i += 2) {
		shuffled[i] = nums[count];
		shuffled[i + 1] = nums[count + n];
		count++;
	}
	return shuffled;
}

int main() {
	vector<int> nums = {2, 5, 1, 3, 4, 7};
	nums = 	shuffle(nums, 3);
	for (int i : nums)
		cout << i << " ";
	return 0;
}