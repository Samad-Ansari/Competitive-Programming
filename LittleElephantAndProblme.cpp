#include<bits/stdc++.h>

using namespace std;


int s=0;
void quickSort(int v[], int f, int l){
	if(f<l){
		int i=f;
		int p=f;
		int j=l;
		while(i<j){
			while(v[i]<=v[p] && i<l){
				i++;
			}
			while(v[j]>v[p]){
				j--;
			}
			if(i<j){
				int t  = v[i];
					v[i] = v[j];
					v[j] = t;
				s++;
				if(s>1){
					cout<<"NO";
					exit(0);
				}
			}
		}

		if(v[p] != v[j]){
			s++;
			if(s>1){
				cout<<"NO";
				exit(0);
			}
		}
		int t = v[j];
		v[j] = v[p];
		v[p] = t;

		quickSort(v, f, j-1);
		quickSort(v, j+1, l);

	}
}

int main(){
	int n;cin>>n;
	int v[n];
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	quickSort(v,0,n-1);
	if(s>1){
		cout<<"NO";
	}
	else {
		cout<<"YES";
	}

	return 0;
}
