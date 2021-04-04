#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	int a[n],e=0,o=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0) e++;
		else o++;
	}
	if(o>e) cout<<e<<endl;
	else cout<<o<<endl;

}

int main(){
	int t;cin>>t;
	while(t--) solve();
}