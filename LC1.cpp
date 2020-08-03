//Detect Capital
//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3409/
#include <iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length(), cnt=0, pos;
        for (int i=0; i<len; i++){
            if (word[i]>=65 && word[i]<=90)
            {
                cnt++;
                pos=i;
            }
                
        }
        if (cnt==0 || (cnt==1 && pos==0) || cnt==len)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution obj;
    cout << obj.detectCapitalUse("FlaG") << endl;
    cout << obj.detectCapitalUse("USA") << endl;
    return 0;
}