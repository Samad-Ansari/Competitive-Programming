#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,s,k,a,t=0;
		cin>>n>>s>>k;
		set<int> st;
		for(int i=0;i<k;i++)
		{
			cin>>a;
			st.insert(a);
		}

		while((st.count(s+t)||s+t>n)&&(st.count(s-t)||s-t<=0))
			t++;
		cout<<t<<endl;
}

int main(){
	
	int t;cin>>t;
	while(t--) solve();

}