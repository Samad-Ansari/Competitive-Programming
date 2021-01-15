#include<bits/stdc++.h>

using namespace std;

class Solution {
	
	public:
		int maxArea(vector<int>& height) {
			int area, max=-1;
			int a = 0, b = height.size()-1;
			while(a<b) {
				if(height[a] > height[b]){
					area = height[b]*(b-a);
					b--;
				}
				else {
					area = height[a]*(b-a);
					a++;
				}
				if(area>max)
					max = area;
			}
			return max;
		}
};

int main() {
	
	vector<int> v;
	int n;
	cin>>n;
	while(n--) {
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	Solution s;
	
	int area = s.maxArea(v);
	cout<<area;
	
	return 0;
}
