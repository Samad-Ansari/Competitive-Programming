#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	std::vector<int> v;
	if(n<=1){
		cout<<-1<<endl;
		return;
	}
	v.push_back(2);
	for(int i=1;i<n;i++){
		v.push_back(3);
	}
	for(auto& x:v) cout<<x;
	cout<<endl;
}

int main(){

	int q;cin>>q;
	while(q--)	solve();

	return 0;
}