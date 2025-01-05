#include<bits/stdc++.h>

using namespace std;

int countPalindromicSubsequence(string s) {
    int n = s.size();
    vector<int> firstOccur(26, -1); 
    vector<int> lastOccur(26, -1);  
    for (int i = 0; i < n; ++i) {
        lastOccur[s[i] - 'a'] = i;
        if (firstOccur[s[i] - 'a'] == -1) {
            firstOccur[s[i] - 'a'] = i;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        if (firstOccur[i] != -1 && lastOccur[i] - firstOccur[i] > 1) {
            unordered_set<char> uniqueChars;
            for (int j = firstOccur[i] + 1; j < lastOccur[i]; ++j) {
                uniqueChars.insert(s[j]);
            }
            count += uniqueChars.size();
        }
    }
    return count;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string input;
	cin >> input;

	int res = countPalindromicSubsequence(input);
	cout << res << endl;

	return 0;
}