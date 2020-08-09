//Problem link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3417/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int dfs(TreeNode* root, int sum)
    {
        if (!root)
        {
            return 0;
        }
        int ans = root->val==sum ? 1 : 0;
        return (ans+dfs(root->left, sum-(root->val))+dfs(root->right, sum-(root->val)));
    }
    int pathSum(TreeNode* root, int sum) {
        if (!root)
            return 0;
        return (dfs(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum));
    }
};
