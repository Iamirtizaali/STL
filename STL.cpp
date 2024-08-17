#include <iostream>
#include <string>
//STL array
#include <array>
//stl vector
#include <vector>
//algorithm library is required to use  pre built alorithm functions
#include <algorithm>
//double ended queue
#include <deque>
//list 
#include <list>
//stack
#include <stack>
//queue
#include <queue>
//set
#include <set>
//map 
#include <map>
using namespace std;


void STLArrayFunctions();
void vectorFunctions();
void dequeFunctions();
void listFunctions();
void stackFunctions();
void queueFunctions();
void priorityQueueFunctions();
void setFunctions();
void mapFunctions();
void algorithmFunctions();
int main() {
	//priorityQueueFunctions();
	//setFunctions();
	algorithmFunctions();
	return 0;
}

/// <summary>
/// in this function we have discussed problems and functions related to STL array
/// </summary>
void STLArrayFunctions() {
	array<int, 5> arr = { 1,2,3,4,5 };
	/*for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (auto x : arr)
	{
		cout << x << " ";
	}*/
	//element at 2nd index
	cout << "element at second index is " << arr.at(3) << endl;
	//to check whether array is empty or not..returns a bool
	//arr.empty()
	//returns 1st and last element
	cout << "first element :" << arr.front() << endl;
	cout << "last element :" << arr.back() << endl;
}


//vectors
//when we add 1 extra element...vector doubles its size
void vectorFunctions() {
	vector<int> v;
	//to check how much element it can store
	cout << v.capacity() << endl;
	//size is used to check how many elements are present in vector
	cout << v.size() << endl;
	//front and back functions are also present in it
	//push_back and pop_back are used to add and remove elements
	//v.clear is used to clear all elements in vector
	//v.begin() and v.end() are used to find first and last iterator
	//sort(v.begin(), v.end()); it sort the array or vector in ascending order
	//vector<int> z(v);  it copies the vector 

}

//here we are going to discuss double ended queue known as deque
void dequeFunctions() {
	deque<int> d;
	//it adds element at end of queue
	d.push_back(3);
	//it adds element at start of queue
	d.push_front(1);
	//removes element from start and end;
	d.pop_back();
	d.pop_front();
	//to print first element
	d.at(1);
	//checks empty or not
	d.empty();
	//front,back, begin,end are also present in it
	//d.erase is used to delete specified part of deque queue


		
}


//we are going to study list
void listFunctions() {
	list<int> l;

	l.push_back(2);
	l.pop_back();
	l.push_front(45);
	//deletes 1 element
	l.erase(l.begin());
	l.size();
	list<int> n(l);
	list<int> e(5, 100);

}

//we are going to study stack
//stack works on principle of FILO
void stackFunctions() {
	stack<string> s;
	s.push("irtiza");
	s.push("nafees");
	s.push("ishtiaq");
	s.pop();
	s.size();
	s.empty();
	cout << "top element is " << s.top() << endl;
}

//we are going to study queue
//queue works on principle of FIFO
void queueFunctions() {
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.pop();
	//it prints 1 bcz it was inserted first
	q.front();
}

//priority queue...derived from queue
void priorityQueueFunctions() {
	//max heap
	priority_queue<int> maxi;

	//min heap
	priority_queue<int, vector<int>, greater<int>> mini;
	maxi.push(1);
	maxi.push(6);
	maxi.push(9);
	maxi.push(4);
	int size = maxi.size();
	for (size_t i = 0; i < size; i++)
	{
		cout << maxi.top() << " ";
		maxi.pop();
		//prints 9 6 4 1
	}
	cout << endl;

	mini.push(4);
	mini.push(7);
	mini.push(9);
	mini.push(2);
	int msize = mini.size();
	for (size_t i = 0; i < msize; i++)
	{
		cout << mini.top() << " ";
		mini.pop();
		//prints 2 4 7 9
	}

	//to check empty or not
	mini.empty();
	maxi.empty();
}


//now we are going to study set , 
// in set elements are stored uniquely
//elements can be just inserted or extracted..cannot be modified
//elements are returned in sorted order
void setFunctions() {
	//time complexity of inserting elements is bigO(logn)
	set<int> s;
	s.insert(3);
	s.insert(3);
	s.insert(3);
	for (auto x : s) {
		cout << x << endl;
		//3 is printed just one time
	}
	//in ordered set elements are not returned in sorted order and it is faster than set
	set<int>::iterator it = s.begin();
	it++; //now it is pointing towards second element
	s.erase(it); //it deletes second element

	s.count(5); //it tells whether this element is present or not ..returns bool
	set<int>::iterator itr=s.find(4); //it finds element and returns its index
	for (auto its = itr; it != s.end(); it++) {
		cout << *its << endl;
		//it prints element from 4 to end
	}
}

//now we are going to study about map
void mapFunctions() {
	//complexity is O(logn)
	map<int, string> m;
	m[1] = "Irtiza";
	m[2] = "nafees";
	m[3] = "ishtiaq";
	m.insert({ 12, "Noor" });
	for (auto s : m) {
		cout << s.first <<" "<<s.second<< endl;
		//elements are printed in sorted order
	}
	//check whether key present or not
	m.count(4); //returns 0
	//to erase element
	m.erase(3); //complete key value pair is removed
	//returns iterator of element
	auto it = m.find(5);
	for (auto i = it; i != m.end(); i++) {
		cout << (*i).first << endl;
	}
}



//---------------------------------Algorithms------------------->>
//now we are going to study pre built algorithms 
void algorithmFunctions() {
	vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(8);
	v.push_back(1);
	//it sorts the vector
	sort(v.begin(), v.end());
	//now we are going to apply binary search in sorted vector
	cout<<binary_search(v.begin(), v.end(), 5)<<endl; //it returns true
	cout<<binary_search(v.begin(), v.end(), 45)<<endl; //it returns false
	//to find lower bound
	cout<<lower_bound(v.begin(), v.end(), 8) - v.begin()<<endl; //it returns 2	
	//to find upper bound
	cout<<upper_bound(v.begin(), v.end(), 8) - v.begin()<<endl; //it returns 1
	//we can also use min max and swap
	//we can also reverse vector and string
	string str = "acd";
	reverse(str.begin(), str.end());
	//we can also rotate vector
	rotate(v.begin(), v.begin() + 1, v.end());

}