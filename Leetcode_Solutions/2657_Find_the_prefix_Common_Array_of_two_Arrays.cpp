#include<bits/stdc++.h>

using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    // set<int> set_a;
    unordered_map<int,int> mp_a;
    int count = 0,n = A.size();
    vector<int> res(n);
    // for(int i = 0;i < n;i++){
    //     mp_a[A[i]]++;
    //     count = 0;
    //     map<int,int> mp_b;
    //     for(int j = 0;j <= i;j++){
    //         mp_b[B[j]]++;
    //         if(mp_a[B[j]] >= mp_b[B[j]])
    //             count++;
    //     }
    //     res[i] = count;
    // }
    vector<int> freq(51,0);
    for(int i = 0;i < n;i++){
        freq[A[i]]++;
        freq[B[i]]++;
        if(A[i] == B[i]) count++;
        else{if(freq[A[i]] == 2) count++;
        if(freq[B[i]] == 2) count++;}
        res[i] = count;
    }

    return res;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n ;
	cin >> n;
	vector<int> A(n),B(n);

	for(int i = 0;i < n;i++){
		cin >> A[i];
	}

	for(int i = 0;i < n;i++){
		cin >> B[i];
	}

	vector<int> res = findThePrefixCommonArray(A,B);

	for(int i = 0;i < n;i++)
		cout << res[i] << " "; 

	return 0;
}