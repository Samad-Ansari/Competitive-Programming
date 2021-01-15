#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	
	
    int lengthOfLongestSubstring(string s) {
    	unordered_set <char> uset;
    	int size = s.size();
    	int start = 0, end = 0, res = 0;
    	while(start<size && end<size) {
    		if(uset.find(s[end]) == uset.end()) {
    			uset.insert(s[end]);
    			end++;
    			res = max(res, end - start);
			}
			else {
				uset.erase(s[end]);
				start++;
			}
		}
		return res;
    }
};

int main(){
	
	string a = "abacdba";
	Solution s;
	int l = s.lengthOfLongestSubstring(a);
	cout<<l;
	
	return 0;
}

