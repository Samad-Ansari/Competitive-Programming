#include<bits/stdc++.h>
using namespace std;

int a,b,s,d[25][61],n,i,k;
int main(){
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>s;
		d[a][s]++;
		if(d[a][s]>k) k=d[a][s]; 
	}
	cout<<k;
}