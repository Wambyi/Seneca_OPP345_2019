//============================================================================
// Name        : Cpp_Template_Library_Ex2_Set.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <string>
#include <cstring>
using namespace std;

int main() {

	set<int> st;
	set<int>::iterator it;
	int choice, item;

	while(1){
		cout<<"\n------------------------------------"<<endl;
		cout<<"Set Implementation in Stl"<<endl;
		cout<<"\n------------------------------------"<<endl;
		cout<<"1.	Insert Element into the Set"<<endl;
		cout<<"2.	Delete Element of the Set"<<endl;
		cout<<"3.	Size of the Set"<<endl;
		cout<<"4.	Find Element in a set"<<endl;
		cout<<"5.	Display by Iterator"<<endl;
		cout<<"6.	Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;

		switch(choice){
		case 1:
			cout<<"Enter the value to be inserted: ";
			cin>>item;
			st.insert(item);
			break;
		case 2:
			cout<<"Enter the element to be deleted: ";
			cin>>item;
			st.erase(item);
			break;
		case 3:
			cout<<"Size of the set: ";
			cout<<st.size()<<endl;
			break;
		case 4:
			cout<<"Enter the element to be found: ";
			cin>>item;
			it = st.find(item);
			if (it != st.end())
				cout<<"Element "<<*it<<" found in the set"<<endl;
			else
				cout<<"No Element Found"<<endl;
			break;
		case 5:
			cout<<"Displaying Map by Iterator: ";
			for (it = st.begin(); it != st.end(); it++){
				cout<< (*it) <<" ";
			}
			cout<<endl;
			break;
		case 6:
			exit(1);
			break;
		default:
			cout<<"Wrong choice"<<endl;
		}
	}

	return 0;
}
