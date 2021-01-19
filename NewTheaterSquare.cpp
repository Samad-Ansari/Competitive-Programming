#include<bits/stdc++.h>

using namespace std;

void solve(){

	int n,m,x,y;cin>>n>>m>>x>>y;
	long long total =0;
	std::vector<string> s(n);
	for(int i=0; i<n; i++)
		cin>>s[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(s[i][j]=='.' && j+1<m && s[i][j+1] == '.'){
				total += (long long)min(2*x, y);
				j++;
			}
			else if(s[i][j] == '.'){
				total += (long long)(x);
			}
		}
	}
	cout<<total<<endl;
}

int main(){
	int q;cin>>q;
	while(q--) solve();
	return 0;
}