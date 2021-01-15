#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long n;
	int i,x=0;
	cin>>n;
	while(n >= 1) {
		if(n%2==1) {
			n--;
			x++;
		}
		else {
			n /= 2;
		}
	}
	cout<<x;
	return 0;
}
