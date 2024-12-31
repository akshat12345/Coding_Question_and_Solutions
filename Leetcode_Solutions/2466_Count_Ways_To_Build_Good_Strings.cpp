#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int mod = 1e9+7;
    int solve(int target,int zero,int one,vector<int> &dp){
        if(target == 0) return 1;
        if(target < 0) return 0;
        if(dp[target] != -1) return dp[target];
        long long sum = 0;
        sum = (solve(target-zero,zero,one,dp) + solve(target-one,zero,one,dp))%mod;

        return dp[target] = sum;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        vector<int> dp(high+1,-1);
        for(int i = low;i <= high;i++){
            ans = (ans + solve(i,zero,one,dp)) % mod;
        }
        return ans;
    }
};

int main(){
	// Comment this line if you are taking input from terminal
	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	Solution sol =  Solution();
	int low,high,one,zero;
	cin >> low >> high >> one >> zero;
	int res  = sol.countGoodStrings(low,high,zero,one);

	cout << "Answer -> " << res ;

}