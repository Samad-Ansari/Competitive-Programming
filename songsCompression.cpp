#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
	ll n,m,c=0,a,b,co=0,i;
	priority_queue<int> q;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		c+=a;
		q.push(a-b);
	}
	while(m<c && q.size()!=0){
		c-= q.top();
		q.pop();
		co++;
	}
	if(m<c) cout<<-1;else cout<<co;
}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	return 0;
}