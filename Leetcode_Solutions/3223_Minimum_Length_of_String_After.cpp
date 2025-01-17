#include<bits/stdc++.h>

using namespace std;

int minimumLength(string s) {
    int n = s.size();
    if(n <= 2) return n;
    
    vector<int> freq(26,0);
    for(char ch : s){
        freq[ch - 'a']++;
    }
    int totalLength = 0;
    for(int i = 0;i < 26;i++){
        if(freq[i] != 0){
            if(freq[i]%2){
                totalLength += 1;
            }else{
                totalLength += 2;
            }
        }
    }

    return totalLength ;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin >> s;

	int res = minimumLength(s);

	cout << res << endl;


	return 0;
}