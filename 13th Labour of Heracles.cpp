#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;cin>>n;
	long long ans=0;
	vector<int> w;
	vector<int> cld(n, 0);
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		w.push_back(a);
		ans += a;
	}
	for(int i=0; i<n-1; i++) {
		int x,y;
		cin>>x>>y;
		cld[x-1]++;
		cld[y-1]++;
	}	
	priority_queue<pair<int,int>> pq;
	for(int i=0; i<n; i++) {
		if (cld[i] > 1)
			pq.push({w[i], cld[i]});	
	}
	
	cout<<ans<<" ";
	auto p = make_pair(0,0);
	for(int i=2; i<n; i++) {
		p = pq.top();
		pq.pop();
		if(p.second > 1) {
			
			ans+= p.first;
			p.second = p.second-1;	
		}
		if(p.second > 1) pq.push(p);
		cout<<ans<<" ";
	}
	cout<<endl;
	
}

int main(){
	int q; cin>>q;
	while(q--){
		solve();
	}
	
	return 0;
}
