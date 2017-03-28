/*
	Standard Library C++ for Map
*/

#include <iostream>
#include <map>

using namespace std;

bool fncomp (char lhs, char rhs) {return lhs<rhs;}

struct classcomp {
  bool operator() (const char& lhs, const char& rhs) const
  {return lhs<rhs;}
};

int main (){
	map<char,int> first {{'a',1}, {'b',2}, {'c',3}, {'d',4}, {'e',5}};

	map<char,int> second (first.begin(),first.end()); // copy map first from begin to end to map second
	cout << second['b'] << endl;

	map<char,int> third (second); // copy all map second to map third
	cout << third['d'] << endl;
	cout << third['a'] << endl;

	map<char,int,classcomp> fourth; // class as Compare
	cout << fourth['a'] << endl;

	bool(*fn_pt)(char,char) = fncomp;
	map<char,int,bool(*)(char,char)> fifth (fn_pt); // function pointer as Compare

	return 0;
}
