/*
	Standard Library C++ for List
*/

#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

int main(){
	int val = 1993;
	int idx = 1;

	list<int> list1;
	list<int> list2;

	//Insert head, index, tail
	list1.push_front(val);                    //head
	list1.push_front(9);                    //head
	list1.push_front(23);                    //head
	// list1.insert(list1.begin() + idx, val);     //index
	list1.push_back(val+1);                     //tail
	list1.push_back(6);                     //tail
	list1.push_back(11);                     //tail

	//Access head, index, tail
	int head = list1.front();                                           //head
	// int mid = list<int>::iterator iter = list1.begin() + idx;    //index
	int tail = list1.back();                                            //tail

	//Size
	unsigned int size1 = list1.size();
	cout << "Size list1 = " << size1 << endl;


	//Remove head, index, tail
	list1.pop_front();                  //head
	list1.erase(list1.begin());     //index
	list1.pop_back();                   //tail

	//Iterate
	for(list<int>::iterator it = list1.begin(); it != list1.end(); it++) {
	    cout << *it << endl; // -> 1993, 1994, 6
	}

	//Clear
	list1.clear();

	// push value to list2
	list2.push_front(11);                    //head
	list2.push_front(3);                    //head
	list2.push_front(val);                    //head
	list2.push_back(val+2);                     //tail
	list2.push_back(9);                     //tail
	list2.push_back(90);                     //tail
	// list2.insert(list2.begin()+1, 10);     //index

	unsigned int size2 = list2.size();
	cout << "\nSize list2 = " << size2 << endl;

	//Iterate
	for(list<int>::iterator it = list2.begin(); it != list2.end(); it++) {
	    cout << *it << endl;
	}

	//---------------------------------
	// Container-Specific Operations
	//---------------------------------

	//Splice: Transfer elements from list to list
	//  splice(iterator pos, list &x)
	//  splice(iterator pos, list &x, iterator i)
	//  splice(iterator pos, list &x, iterator first, iterator last)
	cout << "\nList1 splice list2:" << endl;
	list1.splice(list1.begin(), list2);
	
	//Remove: Remove an element by value
	list1.remove(val);

	//Unique: Remove duplicates
	list1.unique();

	//Merge: Merge two sorted lists
	list1.merge(list2);

	//Sort: Sort the list
	list1.sort();

	//Reverse: Reverse the list order
	list1.reverse();

	//Iterate
	for(list<int>::iterator it = list1.begin(); it != list1.end(); it++) {
	    cout << *it << endl;
	}

	return 0;
}