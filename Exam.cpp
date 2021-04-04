#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void solve(){
	int t;cin>>t;
	cout<<(t>3|t<2?t:t-1)<<"\n";
	for(int i=2; i<=t&&t^3; i=i+2){ cout<<i<<" ";}
	for(int i=1; i<=t&&t^2; i=i+2){ cout<<i<<" ";}
	
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	solve();

	return 0;
}
