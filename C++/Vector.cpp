/*
	Standard Library C++ for Vector
*/

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int val = 1993;
	int idx = 2;
	vector<int> v;

	//Insert head, index, tail
	v.insert(v.begin(), 12);            //head		-> v = 12
	v.insert(v.begin()+1, val);     	//index		-> v = 12, 1993
	v.push_back(2);                     //tail		-> v = 12, 1993, 2
	v.push_back(1);                     //tail		-> v = 12, 1993, 2, 1
	v.push_back(4);                     //tail		-> v = 12, 1993, 2, 1, 4
	v.push_back(9);                     //tail		-> v = 12, 1993, 2, 1, 4, 9

	//Access head, index, tail
	int head = v.front();       //head
	int mid = v.at(idx);    	//index
	int tail = v.back();        //tail
	cout << head << " " << mid << " " << tail << "\n"; // -> 12 2 9

	//Size
	unsigned int size = v.size();

	//Iterate
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	    cout << *it << endl; // -> 12, 1993, 2, 1, 4, 9
	}

	cout << "\n" << endl;

	//Remove head, index, tail
	v.erase(v.begin());             //head  -> remove 12
	v.erase(v.begin() + 1);     	//index -> remove 2
	v.pop_back();                   //tail  -> remove 9

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	    cout << *it << endl; // -> 1993, 1, 4
	}

	return 0;
}