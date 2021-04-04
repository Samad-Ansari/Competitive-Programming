#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	int ans=0;
	while(n>=5){
		ans = ans+n/5;
		n = n/5;
	}
	cout<<ans<<endl;
}

int main(){

	int q;cin>>q;
	while(q--) solve();

	return 0;
}