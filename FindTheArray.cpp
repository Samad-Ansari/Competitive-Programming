#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;cin>>n;
	std::vector<long long> v;
	std::vector<long long> even;
	std::vector<long long> odd;
	long long oddSum=0, evenSum=0, S=0;
	for (int i = 1; i <= n; ++i)
	{
		int a;cin>>a;
		S += a;
		v.push_back(a);
		if(i%2==0){
			even.push_back(1);
			odd.push_back(a);
		}
		else {
			even.push_back(a);
			odd.push_back(1);
		}

	}
	for(int i=0; i<n; i++) {
		evenSum += (v[i] - even[i]);
		oddSum += (v[i] - odd[i]);
	}

	if(oddSum < evenSum && (2*oddSum < S)){
		for(auto& x:odd)
				cout<<x<<" ";
		cout<<endl;
	}
	else{
		for(auto& x: even)
				cout<<x<<" ";
		cout<<endl;
	}


}


int main(){
	int q; cin>>q;
	while(q--){
		solve();
	}
	return 0;
}