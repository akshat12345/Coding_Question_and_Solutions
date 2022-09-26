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

vector<bool> prefixesDivBy5(vector<int>& nums) {
	vector<bool> divisible(nums.size());
	ll sum = 0;
	int i = 0;
	for (int x : nums) {
		sum = sum * 2 + x;
		if (sum % 5 == 0) {
			divisible[i++] = true;
			sum = 0;
		}
		else {
			divisible[i++] = false;
			sum %= 5;
		}
	}
	return divisible;
}

int main() {
	vector<int> nums = {1, 0, 1};
	vector<bool> divisible = prefixesDivBy5(nums);
	for (bool x : divisible)
		cout << x << " ";
	return 0;
}