#include<bits/stdc++.h>
using namespace std;

int countPrefixSuffixPairs(vector<string>& words) {
    int count = 0,n = words.size();
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j < n;j++){
            int len1 = words[i].size(),len2 = words[j].size();
            if(len1 <= len2 and words[i] == words[j].substr(0,len1) and words[i] == words[j].substr(len2-len1,len1))
                count++;
        }
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


	int res = countPrefixSuffixPairs(arr);

	cout << res << endl;

	return 0;
}