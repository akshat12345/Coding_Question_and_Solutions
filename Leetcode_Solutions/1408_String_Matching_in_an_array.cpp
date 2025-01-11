#include<bits/stdc++.h>

using namespace std;

vector<string> stringMatching(vector<string>& words) {
    int n = words.size();
    map<string,int> mp;
    for(int i = 0;i < n;i++)
        mp[words[i]] = i;
    set<string> res;
    for(int i = 0;i < n;i++){
        int n1 = words[i].size();
        for(int ind1 = 0;ind1 < n1;ind1++){
            string temp = "";
            for(int ind2 = ind1;ind2 < n1;ind2++){
                temp.push_back(words[i][ind2]);
                // cout << temp << endl;
                if(mp.find(temp) != mp.end() and i != mp[temp])
                    res.insert(temp);
            }
        }
    }
    vector<string> ans(res.begin(),res.end());
    return ans;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int n;
	vector<string> arr(n);
	for(int i = 0;i < n;i++){
		string temp;
		cin >> temp;
		arr[i] = temp;
	}

	vector<string> res = stringMatching(arr);

	for(string s : res){
		cout << s << " ";
	}

	return 0;
}