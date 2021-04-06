#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	int ans=1e9;
	for(int i=1; i*i<=n; i++)
		ans = min(ans, i-1+(n-1)/i);
	cout<<ans<<"\n";
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--)
		solve();


	return 0;
}