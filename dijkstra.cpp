#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int i,j,n,m,a,b,w,k,z;
ll d[100000], p[100000];
map <pair<ll,ll>, ll> mp;
priority_queue<ll> q;
vector<ll>v[100000];

int f(int n) {
	if( n != 1)
		f(p[n]);
	cout<<n<<" ";
}

int main(){

	cin>>n>>m;
	while(m--) {
		cin>>a>>b>>w;
		v[a].push_back(b);
		v[b].push_back(a);
		mp[{a,b}] = w;
		mp[{b,a}] = w;
	}
	
	for(i=2; i<=n; i++){
		d[i] = 1e18;
	}
	
	q.push(1);
	
	while(q.size()) {
		k = q.top();
		q.pop();
		
		for(i=0; i<v[k].size(); i++) {
			z= v[k][i];
			w = mp[{k,z}];
			if(d[k] + w < d[z]){
				d[z] = d[k]+w;
				p[z] = k;
				q.push(z);
			}
		}
	}
	
	if(d[n]==1e18) 
	{
		cout<<-1;
		return 0;	
	}
	
	f(n);
	return 0;
}

/*
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/
