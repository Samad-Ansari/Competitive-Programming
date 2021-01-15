#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		
		vector<vector<int>> threesum(vector<int>& nums) {
			vector<vector<int>> w;
			if(nums.size() <= 2){
				return w;		
			} 
			else if(nums.size() == 3) {
				w.push_back({nums});
				return w;
			}
			
			sort(nums.begin(), nums.end());
			int i,j,k;
			for(i=0; i<nums.size()-2; i++) {
				if(i > 0 && nums[i] == nums[i-1]) {
						continue;
				}
				k = i+1;
				j = nums.size()-1;
				int sum = -nums[i];
				
				
				while(k<j) {
					if( sum == (nums[k] + nums[j])) {
						vector<int> v;
						v.push_back(nums[i]);
						v.push_back(nums[j]);
						v.push_back(nums[k]);
						w.push_back(v);
						while(k<j && nums[k] == nums[k+1]){k++;}
						while(k<j && nums[j] == nums[j-1]){j--;}
						k++;
						j--;
					}
					else if(sum > (nums[k] + nums[j])) {
						k++;
					}
					else {
						j--;
					}
				}
			}
	
			return w;
		}
};

int main(){
	
	vector<int> v;
	vector<vector<int>> vv;
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	Solution s;
	vv = s.threesum(v);
	for(int i=0; i<vv.size(); i++){
		for(int j=0; j<vv[i].size(); j++){
			cout<<vv[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
