#include<bits/stdc++.h>
#define A 1
using namespace std;


int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int total_toasts_possible_drink = ((k * l) / nl) / n;
	// cout << total_toasts_possible_drink << endl;
	int total_toasts_possible_lime = (c * d) / n;
	// cout << total_toasts_possible_lime << endl;
	int total_toasts_possible_salt = (p / np) / n ;
	// cout << total_toasts_possible_salt << endl;

	int ans = min({total_toasts_possible_lime,total_toasts_possible_salt,total_toasts_possible_drink});

	cout << ans << endl;	

	return 0;
}