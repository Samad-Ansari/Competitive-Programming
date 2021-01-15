#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	
	vector<int> s;
	vector<int>:: iterator it;
	int choice, item;
	
	while(1) {
		
		cout<<endl;
		cout<<"Vector implement"<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. Size"<<endl;
		cout<<"4. Display index"<<endl;
		cout<<"5. Display iterator"<<endl;
		cout<<"6. Clear"<<endl;
		cout<<"7. Exit"<<endl;
		cout<<"Enter choice : "<<endl;
		cin>>choice;
		
		switch(choice) {
			case 1:
				cout<<"Enter value : ";
				cin>>item;
				s.push_back(item);
				break;
			
			case 2:
				cout<<"Delete last item: "<<endl;
				s.pop_back();
				break;
			
			case 3:
				cout<<"Size of vector: ";
				cout<<s.size()<<endl;
				break;
			
			case 4:
				cout<<"Display vector : ";
				for(int i=0; i<s.size(); i++) {
					cout<<s[i]<<" ";
				}	
				cout<<endl;
				break;
			
			case 5:
				cout<<"Display iterator : ";
				for(it= s.begin(); it != s.end(); it++){
					cout<<*it<<" ";
				}
				cout<<endl;
				break;
				
			case 6:	
				s.clear();
				cout<<"Vector Cleared"<<endl;
				break;
		
			case 7:
				exit(1);
				break;
				
			default:
				cout<<"Wrong choice"<<endl;
 					
		}
		
	}
	
	return 0;
}














