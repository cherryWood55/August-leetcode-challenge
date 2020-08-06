//Add and Search Word : Unordered map solution

//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3413/
#include <bits/stdc++.h>
using namespace std;

class WordDictionary {
public:
    
    //a dictionary to store the words indexed by their lengths
    unordered_map<int, vector<string>> dict;
    
    bool check(string s, string w){
        //check if the word is present in the dictionary of words having length len
        int len = s.length();
        for (int i=0; i<len; i++){
            if (w[i]=='.')
                continue;
            else if (w[i]!=s[i])
                return false;
        }
        return true;
    }    
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        int len=word.length();
        dict[len].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int len = word.length();
        for (string s : dict[len]){
            if (check(s, word))
                return true;
        }
        return false;
    }
};

int main()
{
	WordDictionary* obj = new WordDictionary();
  	obj->addWord("bad");
	obj->addWord("dad");
	obj->addWord("mad");
	cout << obj->search("pad") << endl; //-> false
	cout << obj->search("bad") << endl; //-> true
	cout << obj->search(".ad") << endl; //-> true
	cout << obj->search("b..") << endl; //-> true
	return 0;
}