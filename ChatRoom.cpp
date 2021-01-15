#include<bits/stdc++.h>

using namespace std;


int main(){
	
	string s;
	cin>>s;
	bool check = false;
	string h = "hello";
	int j=0,i=0;
		while(j < s.size() && i<h.size()) {
			if(s[j] == h[i]) {
				check = true;
				i++;
			}
			j++;
			
		}
		if(i != h.size()) {
			check = false;
		}
	if(check)
		cout<<"YES";
	else 
		cout<<"NO"; 
	return 0;
}
