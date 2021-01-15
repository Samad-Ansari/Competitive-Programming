#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	bool check = false;
	cin>>n>>d;
	vector<int> v;
 	for(int i=0; i<n-1; i++) {
		int a;
		cin>>a;
		v.push_back(a);
	}
	int i=1;
	while(i<n) {
		if((i + v[i-1]) == d) {
			check = true;
			break;
		} 
		i = i + v[i-1];
	}
	cout<<endl;
	if(check)
		cout<<"YES";
	else 
		cout<<"NO";
		
	return 0;
}
