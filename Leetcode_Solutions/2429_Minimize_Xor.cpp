#include<bits/stdc++.h>

using namespace std;

int minimizeXor(int num1, int num2) {
    int num_of_set_bits = 0;
    for(int i = 0;i < 32;i++){
        if((num2 & (1 << i))){
            num_of_set_bits++;
        }
    }
    int temp = num1;
    for(int i = 31;i >= 0;i--){
        if(((temp & (1 << i)) != 0) and num_of_set_bits > 0){
            temp = temp & (~(1 << i));
            num_of_set_bits--;
        }
    }
    for(int i = 0;i < 32;i++){
        if(((num1 & (1 << i)) == 0) and num_of_set_bits > 0){
            temp = temp | (1 << i);
            num_of_set_bits--;
        }
    }
    
    return temp ^ num1;
}

int main(){

	#ifndef A 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int num1,num2;

	cin >> num1 >> num2;

	int res = minimizeXor(num1,num2);

	cout << res;

	return 0;
}