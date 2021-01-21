#include<bits/stdc++.h>

using namespace std;

int main(){
	string a, b,c,d;
	int x,y;
	cin>>a>>b;
	x=a[0]-b[0];
	y=a[1]-b[1];
	c=(x<0?x=-x,"R":"L");
	d=(y<0?y=-y,"U":"D");
	cout<<max(x,y);
	while(x|y){
		cout<<endl;
		if(x>0)x--, cout<<c;
		if(y>0)y--, cout<<d;
	}

	return 0;
}






