#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int X;
	float Y;
	cin>>X>>Y;
	if(X % 5 == 0) {
		if(X < (Y-0.5)) {
			Y = Y - 0.5 - X;
		}
	}
	cout<<Y<<endl;
	
	return 0;
}
