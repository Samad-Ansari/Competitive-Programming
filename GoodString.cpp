#include<bits/stdc++.h>

using namespace std;

void solve(){

	int n;cin>>n;
	string s;cin>>s;

	int i=0,j=n-1;
	int ans = 0;
	
	while(i<j){
		if(s[i] == '>' || s[j] == '<') {
			break;
		}
		else{
			ans++;
			i++;
			j--;
		}
	}
	cout<<ans<<endl;
}


int main(){

	int q;cin>>q;
	while(q--)
		solve();
	return 0;
}