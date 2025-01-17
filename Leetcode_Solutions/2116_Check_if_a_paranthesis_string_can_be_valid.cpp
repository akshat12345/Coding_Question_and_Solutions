#include<bits/stdc++.h>

using namespace std;

bool canBeValid(string s, string l) {
    stack<int> locked,unlocked;
    int n = s.size();
    if(n >= 1 and ((s[0] == ')' and l[0] == '1') or (s[n-1] == '(' and l[n-1] == '1'))) return false;
    if(n % 2) return false;
    for(int i = 0;i < n;i++){
        if(l[i] == '0'){
            unlocked.push(i);
        }else if(s[i] == '('){
            locked.push(i);
        }else{
            if(!locked.empty()){
                locked.pop();
            }else if(!unlocked.empty()){
                unlocked.pop();
            }else{
                return false;
            }
        }
    }

    while(!locked.empty() and !unlocked.empty() and locked.top() < unlocked.top()){
        locked.pop();
        unlocked.pop();
    }

    if(!locked.empty()) return false;

    return unlocked.size() % 2 == 0? true : false;
}


int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s,locked;

	cin >> s;
	cin >> locked;

	cout << s << " ," << locked << endl;
	bool res = canBeValid(s,locked);


	if(res) cout << "true";
	else cout << "false";


	return 0;
}