#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	string s,t;
	int ans=0;
	cin>>s>>t;
	if(s.size() != t.size()) { cout<<"NO"; return 0;}
	for(int i=0; i<s.size(); i++){
		if(s[i] != t[i]){
			ans++;
		}
	}
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if(s==t && ans==2) cout<<"YES";
	else cout<<"NO";

	return 0;
}