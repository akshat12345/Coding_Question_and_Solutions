#include<bits/stdc++.h>

using namespace std;

int prefixCount(vector<string>& words, string pref) {
    int count = 0,len1 = pref.size(), n = words.size();
    for(int i = 0;i < n;i++){
        if(words[i].size() >= len1 and words[i].substr(0,len1) == pref)
            count++;
    }
    return count;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin >> n;
	vector<string> arr(n);
	for(int i = 0;i < n;i++){
		string temp;
		cin >> temp;
		arr[i] = temp;
	}
	string pref;
	cin >> pref;
	

	int res = prefixCount(arr,pref);

	cout << res << endl;

	return 0;
}