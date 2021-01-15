#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
    	
    	
        int l = s.size();
		if(l <= numRows || numRows == 1) {
			return s;
		}
        int seq[l];
        bool rev = false;
        for(int i=0, j=0; i<l; i++) {
        	seq[i] = j;
        	if(j == numRows-1) {
        		rev = true;
			}
			if(j == 0) {
				rev = false;
			}
			if(rev) {
				j--;
			}
			else {
				j++;
			}
		}
		string output = "";
		for(int i=0; i<numRows; i++){
			for(int j=0; j<l; j++) {
				if(seq[j] == i){
					output += s[j];
				}
			}
			
		}
		return output;
    }
};

int main() {
	
	string c = "AMDAB";
	string a = "";
		
	Solution s;
	a = s.convert(c, 4);
	
	cout<<a;
	

	return 0;
}
