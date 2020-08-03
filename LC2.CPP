//Design Hash set
//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3410/

#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
public:
    /** Initialize your data structure here. */
    int ar[1000000];
    MyHashSet() {
        //constructor
        memset(ar, -1, sizeof(ar));
    }
    
    void add(int key) {
        ar[key]=1;
    }
    
    void remove(int key) {
        ar[key]=-1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return (ar[key]==1);
    }
};

int main()
{
	MyHashSet* obj = new MyHashSet();
	obj->add(1);         
	obj->add(2);         
	cout << obj->contains(1) << endl;    // returns true
	cout << obj->contains(3) << endl;    // returns false (not found)
	obj->add(2);          
	cout << obj->contains(2) << endl;    // returns true
	obj->remove(2);          
	cout << obj->contains(2) << endl;    // returns false (already removed)
	cout << obj->contains(3) << endl;
    return 0;
}