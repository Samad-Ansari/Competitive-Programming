#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int m,n,a;
	cin>>m>>n>>a;
	
	long long p = m/a;
	long long q = n/a;
	if(m%a != 0) {
		p++;
	}
	if(n%a != 0) {
		q++;
	}
	cout<<p*q;
	
	return 0;
}
