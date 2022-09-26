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

vi running_sum(vi a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
		a[i] = sum;
	}
	return a;
}

int main() {
	vi a = {1, 2, 3, 4};
	a = running_sum(a);

	for (int x : a) {
		cout << x << " ";
	}
	return 0;
}