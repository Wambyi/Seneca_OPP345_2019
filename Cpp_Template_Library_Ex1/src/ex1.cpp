//============================================================================
// Name        : test4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	vector <int> vec;
	vector <int>::iterator it;
	int choice, item;

	while (1) {

		cout<<"\n----------------------------------------"<<endl;
		cout<<"Vector Implementation int stl"<<endl;
		cout<<"1.	Insert element into the vector"<<endl;
		cout<<"2.	Delete Last element of the vector"<<endl;
		cout<<"3.	Size of the Vector"<<endl;
		cout<<"4.	Display by Index"<<endl;
		cout<<"5.	Display by Iterator"<<endl;
		cout<<"6.	Clear the Vector"<<endl;
		cout<<"7.	Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;

		switch (choice){
		case 1:
			cout<<"Enter value to be inserted: ";
			cin>>item;
			vec.push_back(item);
			break;
		case 2:
			cout<<"Delete Last Element Inserted:";
			vec.pop_back();
			break;
		case 3:
			cout<<"Size of Vector: ";
			cout<<vec.size()<<endl;
			break;
		case 4:
			cout<<"Displaying Vector by Index: ";
			for (int i=0; i<vec.size(); i++){
				cout<<vec[i]<<" ";
			}
			cout<<endl;
			break;
		case 5:
			cout<<"Display Vector by Iterator: ";
			for (it = vec.begin(); it != vec.end(); it++){
				cout<<*it<<" ";
			}
			cout<<endl;
			break;
		case 6:
			vec.clear();
			cout<<"Vector Cleared";
			break;
		case 7:
			exit(1);
			break;
		default:
			cout<<"Wrong choice";
		}
	}

	return 0;
}
