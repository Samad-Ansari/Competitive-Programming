#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
	ll L,v,q,r;
	cin>>L>>v>>q>>r;
	cout<<L/v-(r/v)+(q-1)/v<<"\n";
}

int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--)
		solve();


	return 0;
}