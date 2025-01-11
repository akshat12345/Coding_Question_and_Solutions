#include<bits/stdc++.h>

using namespace std;

bool canConstruct(string s, int k) {
    if(k > s.size()) return false;
    vector<int> freq(26,0);
    for(char ch : s){
        freq[ch-'a']++;
    }
    int even_count = 0;
    int odd_count = 0;
    for(int i : freq){
        if(i%2) odd_count++;
        else even_count++;
    }

    if(odd_count > k) return false;
    return true;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string temp;
	cin >> temp;

	int k;
	cin >> k;

	bool res = canConstruct(temp,k);


	cout << res ;
	
	return 0;
}