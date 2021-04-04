#include<bits/stdc++.h>

using namespace std;

int main(){

	int x[] = {-1,2,4,-3,5,2,-5,2};
	int n = 8;
	int p = 0, s = 0;
	for (int k = 0; k < n; k++) {
		s = max(x[k],s+x[k]);
		p = max(p,s);
		cout<<s<<" "<<p<<endl;
	}
	cout << p << "\n";
	return 0;
}






//  Algo 1
	// for (int a = 0; a <= n; a++) {
	// 	for (int b = a; b <= n; b++) {
	// 		int s = 0;
	// 		for (int c = a; c <= b; c++) {
	// 			s += x[c];
	// 		}
	// 		p = max(p,s);
	// 		cout<<p<<endl;
	// 	}
	// }
	// cout << p << "\n";


//  Algo 2
// int p = 0;
// 	for (int a = 0; a <= n; a++) {
// 		int s = 0;
// 		for (int b = a; b <= n; b++) {
// 			s += x[b];
// 			p = max(p,s);
// 		}
// 	}
// 	cout << p << "\n";




