#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;cin>>n;
	while(n--){
		long long a; cin>>a;
		int i,f=0; 
		for(i=3;i*i<=a; i=i+2){
			if(a%i==0){
				f=1;
				break;
			}
		}
		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
