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




int numEquivDominoPairs(vector<vector<int>>& dominoes) {
	// int count = 0;
	// unordered_map<int, int> m1, m2;
	// for (int i = 0; i < dominoes.size(); i++) {
	// 	cout << " Iteration " << i << " - ";
	// 	for (auto a : m1) {
	// 		cout << a.first << "," << a.second ;
	// 	}
	// 	cout << endl;
	// 	if ((m1.find(dominoes[i][0]) != m1.end() && m1[dominoes[i][0]] == dominoes[i][1])
	// 	        || (m1.find(dominoes[i][1]) != m1.end() && m1[dominoes[i][1]] == dominoes[i][0])
	// 	   )
	// 		count++;
	// 	m1[dominoes[i][0]] = dominoes[i][1];
	// }
	// return count;
	int count = 0;
	// for (int i = 0; i < dominoes.size() - 1 ; i++) {
	// 	for (int j = i + 1; j < dominoes.size(); j++) {
	// 		if ((dominoes[i][0] == dominoes[j][0] && dominoes[i][1] == dominoes[j][1])
	// 		        || (dominoes[i][1] == dominoes[j][0] && dominoes[i][0] == dominoes[j][1])) {
	// 			count++;
	// 			cout << "Pair -> " << dominoes[i][0] << ","  << dominoes[i][1]
	// 			     << " || " << dominoes[j][0] << ","  << dominoes[j][1] << endl;
	// 		}
	// 	}
	// }
	unordered_map<int, int> m1;
	for (int i = 0; i < dominoes.size(); i++) {
		int small = min(dominoes[i][0], dominoes[i][1]);
		int big = max(dominoes[i][0], dominoes[i][1]);
		int key = 10 * small + big;

		if (m1.find(key) == m1.end()) {
			m1[key]	= 1;
			cout << "Storing inside map " << dominoes[i][0] << dominoes[i][1] << endl ;
		}	else {
			cout << "Increasing count for " << dominoes[i][0] << dominoes[i][1] << " by " << m1[key] << endl;
			count += m1[key];
			m1[key] = m1[key] + 1;
		}
	}

	return count;
}

int main() {
	// vector<vector<int>> nums = {{1, 2}, {2, 1}, {3, 4}, {5, 6} };
	// vector<vector<int>> nums = {{1, 2}, {1, 2}, {1, 1}, {1, 2}, {2, 2}};
	vector<vector<int>> nums = {{1, 1}, {2, 2}, {1, 1}, {1, 2}, {1, 2}, {1, 1}};
	cout << numEquivDominoPairs(nums);
	return 0;
}