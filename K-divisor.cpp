#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n,k;cin>>n>>k;
	ll a = k;
	while(n>k) k = k + a;
	if(k%n) cout<<(k/n)+1<<endl;
	else cout<<(k/n)<<endl;
	return;
}


int main(){

	int t;cin>>t;
	while(t--) solve();


	return 0;
}