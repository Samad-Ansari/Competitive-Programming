#include<bits/stdc++.h>

using namespace std;

int check(vector<int>&v, int k){
	int total=0;
	int n=v.size();
	int sum=0;
	int j=0;
	for (int i = 0; i < n; ++i)
	{
		sum+=v[i];
		if(sum==k){
			total+=(i-j);
			j=i+1;
			sum=0;
		}
		else if(sum>k){
			return -1;
		}
	}
	return total;
}

void solve(){

	int n;cin>>n;
	std::vector<int> v;
	long long sum=0;
	for(int i=0; i<n; i++) {
		int a;cin>>a;
		sum += a;
		v.push_back(a);
	}

	int ans = n-1;
	for(int i=1; i*i<=sum; i++){
		if(sum%i ==0){
			int f1=i;
			int f2=sum/i;
			int a1=check(v,f1);
			int a2=check(v,f2);
			if(a1 != -1)
				ans=min(ans,a1);
			if(a2 != -1)
				ans=min(ans,a2);
		}
	}

	cout<<ans<<endl;
}

int main(){

	int q;cin>>q;
	while(q--)
		solve();


	return 0;
}