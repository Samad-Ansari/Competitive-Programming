#include<iostream>
#include<iomanip>
#include<cmath>
#include<utility>

#define PI 3.1415926535

using namespace std;



int main(){
	
	pair<double, double> p[3];
	pair<double, double> v[2];
	cout<<setprecision(7);
	for(int i=0; i<3; i++) {
		cin>>p[i].first;
		cin>>p[i].second;
	}
	float angle = 0;
	for(int i=0; i<2; i++) {
		v[i].first = p[i].first - p[i+1].first;
		v[i].second = p[i].second - p[i+1].second;	
		double dot = v[i].first*v[i+1].first + v[i].second*v[i+1].second;
		double det = v[i].first*v[i+1].second + v[i].second*v[i+1].first;
		if(angle < abs(atan2(det, dot)* (180/PI))/2){
			angle = abs(atan2(det, dot)* (180/PI))/2;
		}

	}
//	double dot = v[0].first*v[1].first + v[0].second*v[1].second;
//	double det = v[0].first*v[1].second + v[0].second*v[1].first;
//	float angle = abs(atan2(det, dot)* (180/PI));
	int side = 360/angle;
	
	double x = p[0].first - p[1].first;
	double y = p[0].second - p[1].second;
	float l = sqrt(pow(x,2) + pow(y,2));
	cout<<"angle : "<<angle<<"side : "<<side<<" length : "<<l<<endl;
	float A = (l*l*side)/(4*tan(180/side)*PI/180);
	cout<<"Area : "<<A;

	return 0;
}
