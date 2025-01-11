#include<bits/stdc++.h>

using namespace std;

string shiftingLetters(string s, vector<vector<int>>& shifts) {
    int n = s.size();
    vector<int> arr(n+1,0);
    for(auto it : shifts){
        if(it[2] == 0){
            arr[it[0]] -= 1;
            // if(it[1] != it[0])
            arr[it[1]+1] += 1;
        }else{
            arr[it[0]] += 1;
            // if(it[1] != it[0])
            arr[it[1]+1] -= 1;
        }
    }
    // for(int i = 0;i <= n;i++){
    //     // sum += arr[i];
    //     // arr[i] = sum%26;
    //     cout << arr[i] << " " ;
    // }
    // cout << endl;
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += arr[i];
        int temp = (sum < 0) ? -sum : sum;
        arr[i] = temp%26;
        if(sum < 0) arr[i] = -arr[i];
        // cout << arr[i] << " " ;
    }
    // cout << endl;
    for(int i = 0;i < n;i++){
        int new_ch = (s[i] - 'a') + arr[i];
        // cout << new_ch << " ";
        if(new_ch < 0){
            s[i] = ('z' + new_ch + 1);
        }else{
            s[i] = ('a' + new_ch%26);
        }
    }
    return s;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	string s;
	cin >> s;

	int n ;
	cin >> n;
	vector<vector<int>> shifts;
	for(int i = 0;i < n;i++){
		vector<int> temp(3);
		cin >> temp[0] >> temp[1] >> temp[2];
		shifts.push_back(temp);
	}

	string res = shiftingLetters(s,shifts);

	cout << res << endl;


	return 0;
}