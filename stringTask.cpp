#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	vector<char> vow{'a', 'e', 'i', 'y', 'Y', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	cin>>s;
	int i=0,j=0;
	string a = ".";
	while(i < s.size()) {
		auto it = find(vow.begin(), vow.end(), s[i]); 
		if(it != vow.end()){
			s.erase(s.begin() + i);
			i--;
		}
		if(isupper(s[i])) {
			s[i] = s[i] + 32;
		}
		
 		i++;
	}
	for(int i=0; i< s.size(); i++){
		s.insert(i,a);
		i++;
	} 
	cout<<s;
	
	return 0;
	
}
