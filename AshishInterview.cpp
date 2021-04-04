#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	int time=0, sol=0, bot=1;
	for(int i=0; i<n; i++){
		if(a[i] != -1){
			sol++;
		}
		if(a[i]>k) time = 1;
		if(!(a[i]==0 || a[i]==1) && bot==1)
			bot=0;


	}
	double e=n;
	if(sol < ceil(e/2))
		cout<<"Rejected"<<endl;
	else if(time)
		cout<<"Too Slow"<<endl;
	else if(bot)
		cout<<"Bot"<<endl;
	else
		cout<<"Accepted"<<endl;

}

int main(){
	int t;cin>>t;
	while(t--) solve();
}