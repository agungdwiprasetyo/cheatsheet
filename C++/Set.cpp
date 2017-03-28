/*
	Standard Library C++ for Set
*/

#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main(){
	set<int> s;

	//---------------------------------
	// General Operations
	//---------------------------------

	//Insert, gabisa isi element yg sama
	s.insert(20);
	s.insert(10);
	s.insert(5);

	//Size
	unsigned int size = s.size();
	cout << "Size = " << size << endl;

	//Iterate
	for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}

	//Remove element
	s.erase(20);

	//---------------------------------
	// Container-Specific Operations
	//---------------------------------

	//Find if an element exists
	bool exists = (s.find(10) != s.end());
	cout << "is 10? "<< exists << endl;

	//Count the number of elements with a certain value
	unsigned int count = s.count(10);
	cout << "Sum 10 = " << count << endl;
	
	size = s.size();
	cout << "Size = " << size << endl;
	
	//Clear
	s.clear();
	
	return 0;
}
