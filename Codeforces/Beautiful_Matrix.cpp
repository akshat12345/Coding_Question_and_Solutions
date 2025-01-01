#include<bits/stdc++.h>
#define A 1
using namespace std;

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	// vector<vector<int>> maxtrix(5,vector<int>(5,0));
	int x,y;
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			int temp;
			cin >> temp;
			if(temp == 1){
				x = i; y = j;
			}
		}
	}
	int dist = abs(2 - x) + abs(2 - y);
	cout << dist << endl;

	return 0;
}