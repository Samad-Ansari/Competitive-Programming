#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int> par(100);

int who(int n)
{
	if(n==par[n])
	return n;
	
	return par[n]=who(par[n]);
}

main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	par[i]=i;
	
	vector<vector<ll>> dp(2,vector<ll> (1<<n,1e9));
	vector<int> cnt(n);
	dp[0][0]=0;
	
	for(int i=1;i<=m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		x--,y--;
		
		int ind1=i&1,ind2=1^ind1;
		
		cnt[x]++,cnt[y]++;
		
		par[who(x)]=who(y);
		
		for(int j=0;j<(1<<n);j++)
		{
			dp[ind1][j]=min(dp[ind2][j]+2*w,dp[ind2][j^(1<<x)^(1<<y)]+w);
		}
	}
	
	int flag=1;
	
	for(int i=0;i<n;i++)
	{
		if(who(i)!=who(0))
		{
			if(cnt[i])
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag)
	cout<<dp[m&1][0];
	else
	cout<<-1;
}
