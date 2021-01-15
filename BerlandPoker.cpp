#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--) {
		int n,m,k;
		cin>>n>>m>>k;
		if(m==0) {
			cout<<m<<endl;
		}
		else if(n/k >= m) {
			cout<<m<<endl;
		}
		else if((m - n/k) >= (k - 1)) {
			int x = n/k;
			int y = ceil((1.0 * m - n / k) / ( 1.0 * k - 1));
			cout<<x-y<<endl;
		}
		else {
			cout<<n/k-1<<endl;
		}
		
	}
	
	
	return 0;
}
