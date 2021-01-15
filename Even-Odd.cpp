#include<bits/stdc++.h>

using namespace std;

using ll = long long;
void solve(){
	
	int n;cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++) {
		int b;cin>>b;
		a.push_back(b);
	}
	
	sort(a.begin(), a.end(), greater<int>());
	
	ll As=0,Bs=0;
	for(int i=0; i<n; i++) {
		if(i%2==0){
			if(a[i]%2==0){
				As += a[i];
			}
		}
		else {
			if(a[i]%2!=0){
				Bs += a[i];
			}
		}
	}
	if(As>Bs)
		cout<<"Alice"<<endl;
	else if(Bs>As)
		cout<<"Bob"<<endl;
	else 
		cout<<"Tie"<<endl;
}

int main(){
	
	long long t;
	cin>>t;
	while(t--)
		solve();	
	return 0;
}
