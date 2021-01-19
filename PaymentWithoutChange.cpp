#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
void solve(){
	ll a,b,n,S;cin>>a>>b>>n>>S;
	cout<<((S<=min(S/n,a)*n+b)?"YES ":"NO ")<<endl;
}

int main(){
	int q;cin>>q;
	while(q--) solve();
	return 0;
}







