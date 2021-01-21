#include<bits/stdc++.h>

using namespace std;

bool canSum(int target, int *number, int *memo){
	if(memo[target] == 1) return memo[target];
	if(target == 0) return true;
	if(target < 0) return false;
	for(int i=0; i<(sizeof(number)/sizeof(number[0])); i++){
		int rem = target - number[i];
		if(canSum(rem, number, memo) == true){
			memo[target] = true;
			return true;
		}
	}
	return false;
}

int main(){

		int memo[5];
		int a[]= {2,3,4,5};
		cout<<"result: "<<canSum(7, a, memo);
		// cout<<"result: "<<canSum(3, {4,5}, memo);

	
	

	return 0;
}