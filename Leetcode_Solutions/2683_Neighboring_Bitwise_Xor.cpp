#include<bits/stdc++.h>

using namespace std;

bool doesValidArrayExist(vector<int>& derived) {
    int xr = 0;
    for(int i : derived){
        xr = xr ^ i;
    }
    return xr == 0;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<int> derived(n);
	for(int i = 0;i < n;i++)
		cin >> derived[i];

	int res = doesValidArrayExist(derived);

	cout << res ;

	return 0;
}