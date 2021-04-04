#include<iostream>

using namespace std;

int a[105],n,k,p;
string s;

int main(){
	cin>>n>>k;
	while(n--)cin>>s,a[s.size()]++;
	cin>>s;
	for(n=1;n<s.size();n++) p+=a[n];	
	cout<<p/k*5+p+1<<" "<<(p+a[n]-1)/k*5+p+a[n];
}