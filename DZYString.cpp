#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	int k, al[26], max=-1;
	cin>>k;
	for(int i=0; i<26; i++) {
		cin>>al[i];
		if(max<al[i]) {
			max = al[i];
		}
	}
	int sum = 0;
	for(int i=1; i<=s.size() + k; i++) {
		int temp;
		if(i-1 < s.size()){
			temp = (al[s[i-1]- 'a'] * (i));
		}
		else {
			temp = ((i) * max);
		}
		sum = sum+ temp;
	}
	cout<<sum;
	
	return 0;
}
