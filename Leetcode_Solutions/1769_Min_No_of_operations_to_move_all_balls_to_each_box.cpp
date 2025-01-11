#include<bits/stdc++.h>

using namespace std;

vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector<int> res(n);
    for(int i = 0;i < n;i++){
        int count = 0;
        for(int j = 0;j < n;j++){
            if(j != i and boxes[j] == '1')
                count += abs(j - i);
        }
        res[i] = count;
    }
    return res;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	string s;
	cin >> s;

	vector<int> res = minOperations(s);
	for(int i : res)
		cout << i << " ";

	return 0;
}