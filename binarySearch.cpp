#include<bits/stdc++.h>
using namespace std;

int main(){

	int n=9,x=55;
	int t[] = {12,15,19,24,27,36,55,58,67,88};
	int k = 1;
	for (int b = n/2; b >= 1; b /= 2) {
		cout<<b<<endl;
		while (k+b <= n && t[k+b] <= x){ 
			k += b;
			cout<<k<<" "<<b<<endl;
		}
	}
	
	if (t[k] == x) {	cout<<k;} // x was found at index k
	

	return 0;
}




// Algo 1
// int a = 0, b = n-1;
// 	while (a <= b) {
// 		k = (a+b)/2;
// 		if (t[k] == x) {} // x found at index k
// 		if (t[k] > x) b = k-1;
// 		else a = k+1;
// 	}
// 	if(t[k] == x)
// 		cout<<k;