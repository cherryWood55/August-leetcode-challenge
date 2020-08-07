//Find all Duplicates in an Array

//Problem Link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3414/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len=nums.size();
        vector<int> ans;
        for (int i=0; i<len; i++){
            if (nums[abs(nums[i])-1]>=0)
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            else
                ans.push_back(abs(nums[i]));
        }
        return ans;
    }
};

int main()
{
	Solution obj;
	vector<int> ar = {4,3,2,7,8,2,3,1};
	vector<int> ans = obj.findDuplicates(ar);
	for (auto x:ans)
		cout << x << ",";
	cout << endl;
	return 0;
}