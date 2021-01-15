#include<bits/stdc++.h>
#include<vector>

using namespace std;

class solution {
	public:
			vector<int> s;
	
	public:
		
		vector<int> twosum(vector<int> v, int target) {
			for(int i=0; i<v.size(); i++) {
				for(int j=i+1; j<v.size(); j++) {
					if(v[i] + v[j] == target) {
						s.push_back(i);
						s.push_back(j);
						return s;
					}
				}
				
			}
			return s;
	}
};

int main(){
	
	int n;
	vector<int> v,u;
	cin>>n;
	for(int i=0; i<n; i++) {
		int a;
		cin>>a;
		v.push_back(a);
	}
	int t;
	cin>>t;
	solution s;
	u = s.twosum(v, t);
	for(int i=0; i<u.size(); i++)
		cout<<u[i]<<" ";


	return 0;
}
