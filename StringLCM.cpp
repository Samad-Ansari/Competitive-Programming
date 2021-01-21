#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

void solve(){
	string s1;cin>>s1;
	string s2;cin>>s2;
	int l1= s1.size();
	int l2 = s2.size();
	int lc = lcm(l1,l2);
	int n1 = lc/l1;
	int n2 = lc/l2;
	string s3 = s1;
	string s4 = s2;
	for(int i=1; i<n1; i++){
		s1 += s3;
	}
	for(int i=1; i<n2; i++){
		s2 += s4;
	}
	if(s1 == s2){
		cout<<s1<<endl;
	}
	else {
		cout<<-1<<endl;
	}

}

int main() 
{ 
	int q;cin>>q;
	while(q--){
		solve();
	}


	return 0; 
} 
