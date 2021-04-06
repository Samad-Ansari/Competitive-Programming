#include <iostream>
using namespace std;
int main(){
	
	string s;
	cin>>s;
	int p=s.find('0');
	s.erase(begin(s)+p+(p<0));
	cout<<s;
	return 0;
}