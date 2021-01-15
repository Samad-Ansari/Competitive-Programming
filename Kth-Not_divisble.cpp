#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--) {
		long long n,k,l,h,m,sol;
		cin>>n>>k;
		l = 1;
		h = INT_MAX;
		long long ans = 0;
		while(l<=h) {
			m = (l+h)/2;
			sol = m - m/n;
			if(sol>k) {
				h = m-1;
			}
			else if(sol<k) {
				l = m+1;
			}
			else {
				ans = m;
		
				h = m-1;
			}
		}
		cout<<ans<<endl;
		
	}
	
	return 0;
}					 
