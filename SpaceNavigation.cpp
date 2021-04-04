#include<bits/stdc++.h>

using namespace std;

int check(string s, char C){
	int count = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == C) count++;
	}
	return count;
}

void solve(){
	int x,y;cin>>x>>y;
	string s;cin>>s;
	if(x>=0 && y>=0){
		// 1st
		if(check(s,'R') >= x && check(s,'U') >= y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(x<0&&y<0){
		// 2nd
		if(check(s,'L') >= -x && check(s,'D') >= -y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(x>=0 && y<0){
		// 3rd
		if(check(s,'R') >= x && check(s,'D') >= -y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else if(x<0 && y>=0) {
		// 4th
		if(check(s,'L') >= -x && check(s,'U') >= y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}

int main(){
	int t;cin>>t;
	while(t--) solve();
	return 0;
}