// Greedy 
//Using 2 pointer from left and right we are trying to change the array
//So, that we can use new array to make good list  
//eg : 4 3 3 8 4 5 2 -> 4 5 2
//we can remove either front or rear element to make sorted array 


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int *a = new int[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		int i=0;
		int j=n-1;
		int m = -1;
		int store=0;
		while(i<=j) {
			if(a[i] >= a[j] && a[j] >= m) {
				m = a[j];
				j--;
			}
			else if(a[j] >= a[i] && a[i] >= m) {
				m = a[i];
				i++;
			}
			else {
				if(store == i) {
					i++;
				}		
				store = i;
				j=n-1;
				m = -1;
			}
			
		}
		cout<<store<<endl;
	}
	
	
	
	return 0;
}
