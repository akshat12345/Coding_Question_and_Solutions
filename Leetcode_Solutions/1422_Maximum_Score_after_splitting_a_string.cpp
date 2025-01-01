#include<bits/stdc++.h>

using namespace std;

int maxScore(string s) {
    int total_ones = 0,n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] == '1') total_ones++;
    }
    int zeros = 0,ones = 0,max_ans = 0;
    if(s[0] == '0') zeros++;
    else ones++;
    for(int i = 1;i < n;i++){
        int score = zeros + (total_ones - ones);
        max_ans = max(score,max_ans);
        if(s[i] == '0') zeros++;
        else ones++;
    }
    return max_ans;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin >> s;

	int res = maxScore(s);
	cout << res << endl;

	return 0;
}