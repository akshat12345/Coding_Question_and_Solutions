#include<bits/stdc++.h>
#define A 1
using namespace std;

void solve(int n,int m){
	bool end = true;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(i%2 == 1) {
				cout << "#";
			}
			else {
				if((j == m and end == true) or (j == 1 and end == false)) {
					cout << "#";
				}
				else{ 
					cout << ".";
				}
			}
		}
		if(i%2 == 0) end = !end;
		cout << endl;
	}
	return;
}

int main(){

	#ifndef A
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin >> n >> m;
	solve(n,m);
	return 0;
}