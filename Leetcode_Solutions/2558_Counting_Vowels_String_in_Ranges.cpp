#include<bits/stdc++.h>
// #define A 1
using namespace std;

bool isVowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	return false;
}

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    int n = words.size();
    int q = queries.size();
    int count = 0;
    vector<int> count_arr(n);
    for(int i = 0;i < n;i++){
    	if(isVowel(words[i][0]) and isVowel(words[i][words[i].size()-1]))
    		count++;
    	count_arr[i] = count;
    }
    vector<int> res(q);
    for(int i = 0;i < q;i++){
    	if(queries[i][0] == 0){
    		res[i] = count_arr[queries[i][1]];
    	}else{
    		res[i] = count_arr[queries[i][1]] - count_arr[queries[i][0]-1];
    	}
    }
    return res;
}

int main(){
	// uncomment #define A to use 
	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<int> words(n);
	for(int i = 0;i < n;i++){
		cin >> words[i];
	}
	int q;
	cin >> q;
	vector<int> queries(q);
	for(int i = 0;i < q;i++){
		cin >> queries[i];
	}

	vector<int> res = vowelStrings(words,queries);

	for(int i = 0;i < res.size();i++)
		cout << res[i] << " ";

	return 0;
}