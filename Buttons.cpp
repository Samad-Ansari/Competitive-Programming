#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;cin>>n;
	long long ans=n;
	for(int i=1; i<n; i++){
		ans += (n-i)*(i);
	}
	cout<<ans;
	return 0;
}