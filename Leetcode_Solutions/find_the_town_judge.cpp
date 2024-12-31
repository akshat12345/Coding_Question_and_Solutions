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

int findJudge(int n, vector<vector<int>>& trust) {
	unordered_map<int , vector<int>> m1, m2;
	vector<int> v1;
	for (int i = 0; i < trust.size(); i++) {
		m1[trust[i][1]].push_back(trust[i][0]);
		m2[trust[i][0]].push_back(trust[i][1]);
	}

	for (auto i : m1) {
		// cout << i.first << " -> " ;
		// for (int x : i.second)
		// cout << x << " ";
		// cout << " size - " << i.second.size() << endl;
		if (i.second.size() == (n - 1)) {
			// cout << " size n-1 for " << i.first ;
			if ((m2.find(i.first) == m1.end())) {
				// cout << " and it is not present in the map" << endl;
				return i.first;
			}
		}
	}
	return -1;
}
/*BETTER SOLUTION
	vector<int> trust_array(n+1);
	for (int i = 0; i < trust.size(); i++) {
		trust_array[trust[i][0]]--;
		trust_array[trust[i][1]]++;
	}

	for(int i : trust_array)
		if(i == n-1)
			return 1;

	return -1;
*/

int main() {
	// vector<vector<int>> trust = {{1, 2}};
	// vector<vector<int>> trust = {{1, 3}, {2, 3}};
	// vector<vector<int>> trust = {{1, 3}, {2, 3}, {3, 1}};
	vector<vector<int>> trust = {{1, 3}, {1, 4}, {2, 3}, {2, 4} , {4, 3}};
	cout << findJudge(4, trust);
	return 0;
}