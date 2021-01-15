#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, flag = 0, a[10] = {4,7,47,74,447,474,477,774,747,744};
	cin>>n;
	for(int i=0; i<10; i++) {
		if(n%a[i]==0 || n == a[i] ) {
			flag = 1;
			break;
		}
	}
	
	if(flag) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;
}
