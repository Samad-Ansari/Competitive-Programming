#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,m,j,cnt=0,ans,x,sum=0;
    cin>>n;
    int a[n],c[n];
    for(i=0; i<n; i++){
       cin>>a[i];
       sum+=a[i];
       c[i]=sum;
    }
    cin>>m;
    int b[m];
    for(i=0; i<m; i++) cin>>b[i];
    for(j=0; j<m; j++)
    {
         cout<<lower_bound(c,c+n,b[j])-c+1<<endl;
    }

    return 0;
}
