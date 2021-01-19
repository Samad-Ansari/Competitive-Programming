#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++){cin>>v[i];};
	sort(v.begin(),v.end());	// 1 1 4 5 5 9
	int g=0;
	for(int i=0; i<n; i++){
		if(g+1 >= v[i]){
			g++;
		}
		else {
			if(i+1 >= v[i]){
				g=i+1;
			}
		}
	}
	cout<<g+1<<endl;

}

int main(){
	int q;cin>>q;
	while(q--) solve();
	return 0;
}