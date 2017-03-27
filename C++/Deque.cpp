/*
	Standard Library C++ for Deque
*/

#include <iostream>
#include <stdio.h>
#include <deque>

using namespace std;

int main(){
	int val = 1993;
	int idx = 3;

	deque<int> d;

	//Insert head, index, tail
	d.push_front(val);                  //head
	d.push_back(4);                     //tail
	d.push_back(1);                     //tail
	d.push_back(7);                     //tail
	d.push_back(5);                     //tail
	d.insert(d.begin() + 2, 10);     	//index

	//Access head, index, tail
	int head = d.front();       //head
	int mid = d.at(idx);    	//index
	int tail = d.back();        //tail

	//Size
	unsigned int size = d.size();
	cout << "Size = " << size << endl;

	//Iterate
	for(deque<int>::iterator it = d.begin(); it != d.end(); it++) {
	    cout << *it << endl; // 1993, 4, 10, 1, 7, 5
	}

	//Remove head, index, tail
	d.pop_front();                  //head
	d.erase(d.begin() + 1);     	//index
	d.pop_back();                   //tail

	//Clear
	d.clear();

	return 0;
}