#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

	string s;cin>>s;
	long long x;cin>>x;
	long long len = s.size();
	string v(len, '1');
	
	for(int i=0; i<len; i++){
		if(s[i]=='0'){
			if(i-x>=0)
				v[i-x]='0';
			if(i+x<len)
				v[i+x]='0';
		}
	}
	for(int i=0; i<len; i++) {
		if(s[i]=='1'){
			if(((i-x)>=0 && v[i-x]=='1') || ((i+x)<len && v[i+x]=='1'))
					continue;
			else{
				cout<<"-1"<<endl;	
				return;
			}
		}
		else {
			if((i-x>=0 && v[i-x]=='1') || (i+x<len && v[i+x]=='1')){
				cout<<"-1"<<endl;
				return;
			}
		}
	}


	cout<<v<<endl;


}



int main(){

	int q;cin>>q;
	while(q--)
		solve();

}