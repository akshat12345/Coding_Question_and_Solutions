#include<bits/stdc++.h>

using namespace std;

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    int n1 = words1.size(),n2 = words2.size();
    vector<int> max_freq(26,0);
    for(int i = 0;i < n2;i++){
        vector<int> temp_freq(26,0);
        for(int j = 0;j < words2[i].size();j++){
            temp_freq[words2[i][j]-'a']++;
        }
        for(int j = 0;j < 26;j++){
            max_freq[j] = max(max_freq[j],temp_freq[j]);
        }
    }
    vector<string> res;
    for(int i = 0;i < n1;i++){
        vector<int> temp_freq = max_freq;
        for(int j = 0;j < words1[i].size();j++){
            if(temp_freq[(words1[i][j] - 'a')] >= 1)
                temp_freq[(words1[i][j] - 'a')]--;
        }
        int k = 0;
        while(k < 26){
            if(temp_freq[k] >= 1)
                break;
            k++;
        }
        if(k == 26) res.push_back(words1[i]);
    }

    return res;
}

int main(){
	
	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin >> n >> m;
	vector<string> words1(n), words2(m);
	for(int i = 0;i < n;i++){
		string temp;
		cin >> temp;
		words1[i] = temp;
	}

	for(int i = 0;i < m;i++){
		string temp;
		cin >> temp;
		words2[i] = temp;
	}

	vector<string> res = wordSubsets(words1,words2);

	for(string s : res){
		cout << s << " ";
	}

	return 0;
}