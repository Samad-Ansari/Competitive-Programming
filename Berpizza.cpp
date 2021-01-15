#include<bits/stdc++.h>

using namespace std;


int main(){
	int q;cin>>q;
	priority_queue<pair<int,int>>pq;
	int idx=0, id=0;
	vector<bool> visit(500005, false);
	while(q--) {
		int m;cin>>m;
		if(m==1){
			int b;cin>>b;
			pq.push({b, -id});
			id++;
		}
		else if(m==2){
			while(visit[idx] != false) {
				idx++;
			}
			visit[idx] = true;
			cout<<idx+1<<endl;
		}
		else {
			
			while(visit[-pq.top().second] != false) pq.pop();
			visit[-pq.top().second] = true;
			int temp = -pq.top().second;
			cout<<temp+1<<endl;
		}
		
	}
	
	
	return 0;
}
