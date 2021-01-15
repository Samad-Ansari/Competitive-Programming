#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--) {
		int n,a,b,c,d,f=0;
		cin>>n>>a>>b>>c>>d;
		for(int i = a-b; i<= a+b; i++) {
			for(int j= c-d; j<=c+d; j++) {
				if(j%i == n) {
					cout<"YES";
					f = 1;
					break;
				}
			}
			if(f==1)
				break;
			else 
				cout<<"NO";
		}
	}
	
	return 0;
}
