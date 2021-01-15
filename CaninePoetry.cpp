#include<bits/stdc++.h>

using namespace std;

// const int N = 100*1000 + 7;
// int n;
// char in[N];
// bool used[N];

// void solve(){
// 	scanf("%s", in + 1);
// 	n = strlen(in + 1);
	
// 	for(int i = 1; i <= n; ++i)
// 		used[i] = false;
	
// 	int ans = 0;
// 	for(int i = 2; i <= n; ++i){
// 		bool use_need = false;
// 		if(in[i] == in[i - 1] && !used[i - 1])
// 			use_need = true;

// 		if(i > 2 && in[i] == in[i - 2] && !used[i - 2])
// 			use_need = true;

// 		used[i] = use_need;
// 		ans += used[i];
// 	}
// 	cout<<ans<<endl;
// }


const int N = 1e5 + 7;

int n;
char in[N];
int dp[N][2][2];

void solve(){
	scanf("%s", in + 1);
	n = strlen(in + 1);

	for(int ta = 0; ta < 2; ++ta)
		for(int tb = 0; tb < 2; ++tb)
			dp[0][ta][tb] = 0;

	for(int i = 1; i <= n; ++i)
		for(int ta = 0; ta < 2; ++ta)
			for(int tb = 0; tb < 2; ++tb)
				dp[i][ta][tb] = N;
	
	for(int i = 1; i <= n; ++i){
		if(in[i] != in[i - 1]){
			if(in[i] != in[i - 2])
				dp[i][0][0] = min(dp[i][0][0], dp[i - 1][0][0]);
			dp[i][0][0] = min(dp[i][0][0], dp[i - 1][0][1]);
		}
		
		if(in[i] != in[i - 2])
			dp[i][0][1] = min(dp[i][0][1], dp[i - 1][1][0]);
		dp[i][0][1] = min(dp[i][0][1], dp[i - 1][1][1]);
		
		dp[i][1][0] = min(dp[i][1][0], min(dp[i - 1][0][0], dp[i - 1][0][1]) + 1);
		dp[i][1][1] = min(dp[i][1][1], min(dp[i - 1][1][0], dp[i - 1][1][1]) + 1);
		cout<<"For "<<i<<endl;
		for(int l=0; l<2; l++){
			for(int m=0; m<2; m++) {
				cout<<dp[i][l][m]<<" ";
			}
			cout<<endl;
		}

	}


	
	int ans = N;
	for(int ta = 0; ta < 2; ++ta)
		for(int tb = 0; tb < 2; ++tb)
			ans = min(ans, dp[n][ta][tb]);
	printf("%d\nend\n", ans);
}


int main(){
	int q;cin>>q;
	while(q--){
		
		solve();
		
	}
	
	
	
	return 0;
}
