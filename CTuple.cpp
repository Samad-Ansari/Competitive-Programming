#include<bits/stdc++.h>

using namespace std;

long long sum(long long n){
	long long ans = n*(n+1)/2;
	return ans;
}

void solve(){

	int n;cin>>n;
	std::vector<int> v;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	long long ans =0;
	for(int i=0; i<n; i++){
		int pos = upper_bound(v.begin(), v.end(), v[i]+2)-v.begin()-1;
		int l = pos-i-1;
		ans += sum(l);
	}

	cout<<ans;
	cout<<endl;
}

int main(){

	int q;cin>>q;
	while(q--)
		solve();

	return 0;
}

