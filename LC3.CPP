//Valid palindrome
//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3411/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s=="")
            return true;
        
        int len=s.length();
        
        string str="";
        
        for (int i=0; i<len; i++){
            if (isalpha(s[i])||isdigit(s[i])){
                str+=s[i];
            }
        }
        
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        
        int nlen=str.length();
        for (int i=0; i<nlen/2; i++){
            if (str[i]!=str[nlen-i-1])
                return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    cout << obj.isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << obj.isPalindrome("race a car") << endl;
    return 0;
}