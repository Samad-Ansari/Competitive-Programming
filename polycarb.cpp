#include<bits/stdc++.h>

using namespace std;
int main(){
	
	long long  t;

	cin>>t;
	
	while(t--) {
		int w,h,n;
		cin>>w>>h>>n;
		int x=1;
		while(x<n) {
			if(h%2==0 || w%2==0) {
				if(h%2==0){
					h = h/2;
					x = x*2;
				}	
					
				if(w%2==0) {
					w = w/2;
					x = x*2;
				}
			}
			else{
				break;
			}
		}
		if(x>=n) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
		
		
	}	
	
	return 0;
}
