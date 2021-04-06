#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;cin>>n>>m;
	int s=0;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		s+=a;
	}
	if(m<n || n==2)
		cout<<-1<<"\n";
	else {
		cout<<2*s<<"\n";
		for(int i=1; i<=n; i++)
			cout<<i<<" "<<(i%n+1)<<"\n";
	}
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	int t;cin>>t;
	while(t--)		
		solve();
	return 0;
}