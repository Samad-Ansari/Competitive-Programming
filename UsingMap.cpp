#include<iostream>
#include<map>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	map<char, int> mp;
	map<char, int>:: iterator it;
	int choice, item;
	char s;
	
		cout<<"Map implementation"<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. Size"<<endl;
		cout<<"4. Find Element by key"<<endl;
		cout<<"5. Display by iterator"<<endl;
		cout<<"6. Count element at specific key"<<endl;
		cout<<"7. Exit"<<endl;
	while(1) {
		cout<<"Enter a choice : ";
		cin>>choice;
		
		switch(choice) {
			case 1:
					cout<<"Enter value : ";
					cin>>item;
					cout<<"Enter key : ";
					cin>>s;
					mp.insert(pair<char,int>(s, item));
					break;
			
			case 2:
					cout<<"Enter value to be deleted ";
					cin>>s;
					mp.erase(s);
					break;
					
			case 3:
					cout<<"Size of map : ";
					cout<<mp.size()<<endl;
					break;
			
			case 4:
					cout<<"Enter key at which value to be found : ";
					cin>>s;
					if(mp.count(s) != 0)
						cout<<mp.find(s)->second<<endl;
					else
						cout<<"No element found"<<endl;
					break;
			
			case 5:
					cout<<"Displaying map by iterator : "<<endl;
					for(it = mp.begin(); it != mp.end(); it++) {
						cout<<(*it).first <<": "<<(*it).second<<endl;
					}
					break;
			
			case 6:
					cout<<"Enter the key at which value to be found : ";
					cin>>s;
					cout<<mp.count(s)<<endl;
					break;
			
			case 7:	
					exit(1);
					break;
			default: 
					cout<<"Invalid choice"<<endl;
		}			
	}
	
	return 0;
}











