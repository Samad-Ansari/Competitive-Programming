#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	long long k;
	cin>>n>>k;
	if(n==1 && k>0){
		cout<<-1;
		return;
	}
	std::vector<int> v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	int p;
	long long j=0;
	for(int i=n-1; i>0; i--){
		if(v[i-1] < v[i]){
			p = i;
			j += (v[i]-v[i-1]);
			v[i-1] = v[i];
		}
	}
	if(j==k) cout<<p<<endl;
	else cout<<-1<<endl;
}

int main(){

	int t;cin>>t;
	while(t--) solve();
	return 0;
}