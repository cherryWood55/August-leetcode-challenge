// Proble link : https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3415/
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
    map<int, set<pair<int,int>>> m;
    void pre(TreeNode* root, int horiz, int vert)
    {
        if (!root)
            return;
        m[horiz].insert({vert, root->val});
        pre(root->left, horiz-1, vert+1);
        pre(root->right, horiz+1, vert+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        pre(root,0,0);
        for (auto it1:m)
        {
            vector<int> c;
            for (auto it2:it1.second)
            {
                c.push_back(it2.second);
            }
            ans.push_back(c);
        }
        return ans;
    }
};
