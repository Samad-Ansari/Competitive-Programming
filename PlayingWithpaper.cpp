#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll ships(ll a,ll b){
	if(a==b) return 1;
	if(a==1) return b;
	if(b==1) return a;
	if(a>b){
		a = a-b;
		return 1 + ships(a,b);
	}
	b = b-a;
	return 1+ships(a,b);
}

int main(){

	ll a,b;cin>>a>>b;
	cout<<ships(a,b);

	return 0;
}