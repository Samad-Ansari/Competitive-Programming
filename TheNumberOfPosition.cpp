#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,a,b;cin>>n>>a>>b;
	vector<int> v;
	int p = n-b;


	for(int i=p; i<n; i++){
		if(p>a){
			break;
		}
		p++;
	}
	cout<<n-p+1;
	return 0;
}