#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;cin>>n>>k;
	long long a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	long long s=0,x=0;
	for(int i=1; i<n; i++){
		s += a[i-1];
		float l= a[i]/s;
		float m = k/100;
		cout<<l;
		if((a[i]/s) > (k/100))
		{ 	
			x += ((a[i]*100)/k)-s;
			s += x;
		}
	}
	cout<<x<<endl;

}

int main(){
	int t;cin>>t;
	cout<<setprecision(5);
	while(t--) solve();
	return 0;
}