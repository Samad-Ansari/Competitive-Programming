#include<iostream>
#include<map>
#include<algorithm>
#include<set>

using namespace std;

int main(){
	
	set< pair<int , int> > S;
	S.insert({2,4});
	S.insert({10,20});
	S.insert({30,400});
	S.insert({401, 450});
	
	int point = 50;
	
	auto it = S.upper_bound({point, INT_MAX});
	if(it == S.begin()) {
		cout<<"The given point not in interval";
		return 0;
	}
	it--;
	pair<int, int> current = *it;
	if(current.first <= point && point <= current.second){
		cout<<"yes its present: " << current.first<<" "<<current.second<<endl;
	}
	else {
		cout<<"not in interval";
	}
	
	
	return 0;
}
