#include<iostream>

using namespace std;

int stair_case(int n, int* output) {
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n==2) {
		return 2;
	}
	if(n==3) {
		return 3;
	}
	if(output[n] > 0) {
		return output[n];
	}
	output[n] = stair_case(n-1, output) + stair_case(n-2, output) + stair_case(n-3, output);
	return output[n];
}

int main(){
	
	int n;
	cin>>n;
	int* output = new int[n];
	cout<<stair_case(n, output);
	
	return 0;
}
