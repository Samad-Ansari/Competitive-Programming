#include<bits/stdc++.h>

using namespace std;

bool compare(const string &lhs, const string &rhs) { return lhs.size() < rhs.size(); }


int main(){

	int n;cin>>n;
	std::vector<string> s(n);
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	sort(s.begin(), s.end(), compare);

	for(int i=n-1; i>0; i--){
		int index = s[i].find(s[i-1]);
		if(index == -1){
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES"<<endl;
	for(int i=0; i<n; i++) {
		cout<<s[i]<<endl;
	}

	return 0;
}