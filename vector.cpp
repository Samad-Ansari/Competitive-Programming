#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool f(int x, int y){
	return x>y;
}

int main(){
	
	vector<int> A = { 11,23,35,42 };

	cout << A[1] << endl;
	
	sort(A.begin(), A.end());
	
	bool present = binary_search(A.begin(), A.end(), 11);
	
	present = binary_search(A.begin(), A.end(), 4);
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);	
	
	A.push_back(123);
	
	auto it = lower_bound(A.begin(), A.end(), 35);
	auto it2 = lower_bound(A.begin(), A.end(), 100);
	
	cout<< *it << *it2<<endl;
	cout<< it2-it<<endl;
	
	sort(A.begin(), A.end(), f);
	
	for(int x: A){
		x++;
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}








