#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(a <= b/m) {
		cout<<n*a;
	}
	else {
		
		cout<<n/m*b + min(n%m*a, b);
	}
	
	return 0;
}
