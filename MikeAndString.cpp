#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	int len = s[0].size();
	int ans;
	// for(int i=0; i<n; i++){
	int i=0;
	for(i=0; i<len; i++){
		cout<<s[0][i]<<" ";
	}
	unordered_map<int, char> mp;
	for(int j=0; j<len; j++)
	{
		mp.insert({j, s[0][j]});
	}
	cout<<endl;
	cout<<x[0].first<<<
		// exit(0);

		// for(int k=0; k<len; k++){
		// 	if(k==i){
		// 		continue;
		// 	}
		// 	else {
		// 		ans+=mp[s[k][0]];
		// 	}
		// }
		// cout<<ans;
	// }


	return 0;
}