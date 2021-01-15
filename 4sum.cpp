#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        int len = num.size();
        int left, right, sum;
        sort(num.begin(), num.end());
        vector<vector<int>> res;
        for (int i = 0; i < len - 3; ++i) {
            if (i && num[i] == num[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < len - 2; ++j) {
                if (j != i + 1 && num[j] == num[j - 1]) {
                    continue;
                }
                sum = target - num[i] - num[j];
                left = j + 1, right = len - 1;
                while (left < right) {
                    if (num[left] + num[right] == sum) {
                        res.push_back({num[i], num[j], num[left], num[right]});
                        ++left, --right;
                        while (left < right && num[left] == num[left - 1]) {
                            ++left;
                        }
                        while (left < right && num[right] == num[right + 1]) {
                            --right;
                        }
                    } else {
                        if (num[left] + num[right] > sum) {
                            --right;
                        } else {
                            ++left;
                        }
                    }
                }
            }
        }
        return res;
    }
};
int main(){
	
	vector<vector<int>> w;
	vector<int> v({-2, 0, 1, 1, 4, -2});

	int target= 0;
	Solution s;
	w = s.fourSum(v, target);
	
	for(int i=0; i<w.size(); i++) {
		for(int j=0; j<w[i].size(); j++) {
			cout<<w[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
