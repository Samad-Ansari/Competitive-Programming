#include <iostream>
using namespace std;
int i,m,x=0,n,a[1000],j;
int main(){
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++){
	m=1;
	for(j=i-1;j>=0;j--) 
		if(a[j]<=a[j+1]) ++m;
		else break;
	for(j=i+1;j<n;j++)
		if(a[j]<=a[j-1]) ++m;
		else break;
	x=max(x,m);
}
cout<<x;
return 0;
}