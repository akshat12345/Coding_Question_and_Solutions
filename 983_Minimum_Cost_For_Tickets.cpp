#include<bits/stdc++.h>

using namespace std;

int solve(int ind,int n,vector<int> &days,vector<int>& costs,vector<int> &dp){
    if(ind >= n) return 0;
    if(dp[ind] != -1) return dp[ind];
    int one_day = costs[0] + solve(ind+1,n,days,costs,dp);
    int seven_days = INT_MAX;
    int temp = ind;
    while(temp < n and days[temp] < (days[ind] + 7)){
        temp++;
    }
    seven_days = costs[1] + solve(temp,n,days,costs,dp);
    int thirty_days = INT_MAX;
    temp = ind;
    while(temp < n and days[temp] < (days[ind] + 30)){
        temp++;
    }
    thirty_days = costs[2] + solve(temp,n,days,costs,dp);

    return dp[ind] = min(one_day,min(seven_days,thirty_days));
}

int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n = days.size();
    vector<int> dp(n,-1);
    return solve(0,n,days,costs,dp);
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<int> days(n);
	for(int i = 0;i < n;i++)
		cin >> days[i];
	vector<int> cost(3);
	cin >> cost[0];
	cin >> cost[1];
	cin >> cost[2];

	int ans = mincostTickets(days,cost);
	cout << "Answers -> " << ans;

	return 0;
}