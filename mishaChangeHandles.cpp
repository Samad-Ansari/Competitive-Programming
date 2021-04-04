#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void solve(){
	int n;cin>>n;
	unordered_map<string, string> mp;
	
	for(int i=0;i<n;i++){
		string s,t;
		cin>>s>>t;
		if(mp[s]!="")mp[t]=mp[s];
		else mp[t]=s;
		mp.erase(s);
	}
	cout<<mp.size()<<endl;
	for(auto i:mp)cout<<i.second<<" "<<i.first<<endl;

}


int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	solve();


	return 0;
}