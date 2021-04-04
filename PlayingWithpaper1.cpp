#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	ll a,b;cin>>a>>b;
	ll ans=0;
	while(a >=2 && b >=2){
		if(a>b) {
			ans += a/b;
			a = a%b;
		}
		else {
			ans += b/a;
			b = b%a;
		}
	}
	if(a==1) ans+=b;
	else if(b==1)ans += a;
	cout<<ans;
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	solve();


	return 0;
}