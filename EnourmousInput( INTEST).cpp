#include<iostream>

using namespace std;

int main() {
	
	int n,k,t=0,j;
	cin>>n>>k;
	while(n--) {
		cin>>j;
		if(j%k == 0)
			t++;
	}
	cout<<t;
	return 0;
}
