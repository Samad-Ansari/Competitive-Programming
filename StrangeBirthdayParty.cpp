#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{int t;cin>>t;while(t--){ll n,m,i,j,ans=0;cin>>n>>m;ll k[n],c[m];for(i=0;i<n;i++)cin>>k[i];
for(i=0;i<m;i++)cin>>c[i];sort(k,k+n);for(i=n-1,j=0;i>=0;i--){if(j<k[i]-1){ans+=c[j];j++;}
else ans+=c[k[i]-1];}cout<<ans<<"\n";}}
