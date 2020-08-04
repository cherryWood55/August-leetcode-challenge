//Power of 4
//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3412/

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:

    double logn(int num, int base)//calculates log base 4
    {
        return (log(num)/log(base));
    }

    bool isPowerOfFour(int num) {
        
        if (num<=0)
            return false;
        return (floor(logn(num, 4))==ceil(logn(num, 4)));
        
    }
};
int main()
{
    Solution obj;
    cout << obj.isPowerOfFour(64) << endl;
    cout << obj.isPowerOfFour(5) << endl;
    return 0;
}