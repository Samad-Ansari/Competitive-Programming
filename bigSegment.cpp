#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void solve(){\
	int l,r,c=0;
	int t;cin>>t;
	while(t--) {
		cin>>l>>r;
		if(r-l>1) c++;
	}
	if(c==0) cout<<-1;
	else cout<<c;
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	solve();


	return 0;
}