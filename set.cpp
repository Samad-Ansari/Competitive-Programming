#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){
	
	set<int> S;
	S.insert(1);
	S.insert(4);
	S.insert(-2);
	S.insert(8);
	
	for(int x: S){
		cout<<x<<" ";
	}
	cout<<endl;

	auto it = S.find(-1);
	if(it == S.end()){
		cout<<"Not present"<<endl;
	}
	else{
		cout<<"present"<<endl;
	}
	
	auto it2 = S.upper_bound(-1);
	auto it3 = S.upper_bound(4);
	cout<<*it2<<" "<<*it3<<endl;
	
	auto it4 = S.upper_bound(2);
	if(it4 == S.end()){
		cout<<"Not found";
	}
 	return 0;
}
