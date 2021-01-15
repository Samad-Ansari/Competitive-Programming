#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		n = n*2;
		vector<int> a;
		for(int i=0; i<n; i++) {
			int s;
			cin>>s;
			a.push_back(s);
		}
		sort(a.begin(), a.end());
		int adiff = a[n/2] - a[n/2 -1];
		cout<<adiff<<endl;
		
		
	}
	
	return 0;
}
