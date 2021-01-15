#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
	int n;
	cin>>n;
		int s=0;
		while(n--)
		{
			 int x;
			 cin>>x;
			 if(x<=2048)
			 	s+=x;
		}
		if(s>=2048)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	

}

