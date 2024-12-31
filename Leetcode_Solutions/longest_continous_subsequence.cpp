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

int findLengthOfLCIS(vector<int>& nums) {

	int count = 1;
	vector<int> keep_count;

	int max = -1;
	for (int i = 1; i < nums.size(); i++) {
		if ((nums[i - 1] < nums[i]))
			count++;
		else {
			if (count > max)
				max = count;
			count = 1;
		}
	}
	keep_count.push_back(count);
	return max > keep_count[keep_count.size() - 1] ? max : keep_count[keep_count.size() - 1];
}

int main() {
	vector<int> v = {1, 5, 3, 4, 7};
	cout << findLengthOfLCIS(v);
	return 0;
}
