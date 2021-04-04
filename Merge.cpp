#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	int cnt[3];
	memset(cnt, 0, sizeof(cnt));
	for(int i=0; i<n; i++){
		int x;cin>>x;
		++cnt[x%3];
	}
	int ans = cnt[0];
	int mn = min(cnt[2], cnt[1]);
	ans += mn;
	cnt[2] -= mn, cnt[1] -= mn;
	ans += (cnt[1] + cnt[2])/3;
	cout<<ans<<endl;
}

int main(){
	int q;cin>>q;
	while(q--) solve();

	return 0;
}