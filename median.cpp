#include <bits/stdc++.h>

using namespace std;

class Solution {
	
	public:
		double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
			
			vector<double> v;
			for(int i=0; i<nums1.size(); i++) {
				v.push_back(nums1[i]);
			}
			for(int i=0; i<nums2.size(); i++) {
				v.push_back(nums2[i]);
			}
			double result;
			sort(v.begin(), v.end());
			int s = v.size();
			cout<<s<<endl;
			if(s%2==0) {
				
				result = (v[(s/2)-1]+v[round((s+1)/2)])/2;
				return result;
			}
			else {
				result = v[((s+1)/2)-1];
				return result;
			}
    	}
	
};


int main(){
	
	vector<int> a;
	vector<int> b;
	
	cout.precision(5);
	int n1,n2;
	cin>>n1;
	for(int i=0; i<n1; i++){
		int c;
		cin>>c;
		a.push_back(c);
	}
	cin>>n2;
	for(int i=0; i<n2; i++){
		int c;
		cin>>c;
		b.push_back(c);
	}
	Solution s;
	double res = s.findMedianSortedArrays(a,b);
	cout<<fixed<<res;
	return 0;
}
