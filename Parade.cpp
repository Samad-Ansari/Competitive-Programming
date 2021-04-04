#include<bits/stdc++.h>

using namespace std;

int ll[100005], rr[100005];
int main(){
	int n;cin>>n;
	int L=0,R=0;
	for(int i=0; i<n; i++){
		cin>>ll[i]>>rr[i];
		L += ll[i];
		R += rr[i];
	}
	int maxk = L<R?R-L:L-R;
	int ans=0;
	for(int i=0; i<n; i++){
		int li = (L-ll[i]+rr[i]);
		int ri = (R+ll[i]-rr[i]);
		int ki = li<ri?ri-li:li-ri;

		if(ki > maxk) {
			maxk = ki;
			ans = i+1;
		}
	}
	cout<<ans;
}