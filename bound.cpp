#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v{3,5,10,17,21};
	
	// when number is not in list
	auto lower_diff = lower_bound(v.begin(), v.end(), 15);
	cout<<"Pos : "<<(lower_diff-v.begin() +1)<<endl;
	
	// when number is in list
	auto lower_same = lower_bound(v.begin(), v.end(), 10);
	cout<<"Pos : "<<(lower_same-v.begin() +1)<<endl;
	
	// when number is not in list
	auto upper_diff = upper_bound(v.begin(), v.end(), 15);
	cout<<"Pos : "<<(upper_diff-v.begin() +1)<<endl;
	
	// when number is in list
	auto upper_same = upper_bound(v.begin(), v.end(), 5);
	cout<<"Pos : "<<(upper_same-v.begin() +1)<<endl;
	
	
	
	return 0;
}
