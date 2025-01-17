#include<bits/stdc++.h>

using namespace std;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(),m = nums2.size();
    int xr = 0;
    if(m%2 == 1){
        for(int i = 0;i < n;i++){
            xr = xr ^ nums1[i];
        }
    }
    if(n%2 == 1){
        for(int i = 0;i < m;i++){
                xr = xr ^ nums2[i];
        }
    }
    return xr;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin >> n >> m;
	vector<int> A(n), B(m);
	for(int i = 0;i < n;i++){
		cin >> A[i];
	}

	for(int i = 0;i < m;i++){
		cin >> B[i];
	}


	int res = xorAllNums(A,B);

	cout << res ;


	return 0;
}