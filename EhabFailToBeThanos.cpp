#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;cin>>n;
	long long sum=0;
	std::vector<long long> v(2*n);
	for(int i=0; i<2*n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	sum = accumulate(v.begin(), v.begin()+(2*n), sum);
	if(sum == 2*n*v[0]){
		cout<<-1; return 0;
	}
	for(auto& x:v){
		cout<<x<<" ";
	}

	return 0;
}