#include<bits/stdc++.h>

using namespace std;

void solve(){
	string s;cin>>s;
	std::vector<char> v;
	int i=1;
	v.push_back(s[0]);
	while(s[i] != '\0'){
		if(s[i] == 'B' && v.size()>0){
			v.pop_back();
		}
		else{
			v.push_back(s[i]);
		}
		i++;
	}

	cout<<v.size()<<endl;
}

int main(){

	int t;cin>>t;
	while(t--) solve();

	return 0;
}