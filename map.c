#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	
	map<int, int> A; 
	A[1] = 100;
	A[2] = 200;
	A[0] = -5;
	A[10000] = 4;
	
	map<char, int> cnt;
	string x = "Samad";
	
	for(char c: x) {
		cnt[c]++;
	}
	
	cout<<cnt['a']<<" "<<cnt["g"]<<endl;
	
	return 0;
}
