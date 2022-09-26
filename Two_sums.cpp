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

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> a;
	vector<int> result(2);
	for (int i = 0; i < nums.size(); i++) {
		if (a.find(nums[i]) != a.end()) {
			result[0] = a[nums[i]];
			result[1] = i;
		}
		a[target - nums[i]] = i;
	}
	return result;
}

int main() {
	vi a  = {2, 7, 11, 15};
	vi b = twoSum(a, 9 );

	for (int i : b)
		cout << i << " ";
	return 0;
}