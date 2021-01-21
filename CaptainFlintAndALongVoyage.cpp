#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	int x = (n+3)/4;
	for(int i=0; i<n-x; i++){ cout<<9;}
	for(int i=0; i<x; i++) { cout<<8;}
	cout<<endl;
}

main()
{
	int q;cin>>q;
	while(q--) solve();
}