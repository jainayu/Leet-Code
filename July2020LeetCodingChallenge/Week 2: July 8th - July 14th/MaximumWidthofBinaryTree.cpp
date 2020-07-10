/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   void dfs(TreeNode* root, vector<double> &lefts, int depth, double ix, double &max)       {
        if(root==NULL) return;
        if(lefts.size() <= depth) lefts.push_back(ix);
        max = std::max(max,ix+1-lefts[depth]);
        dfs(root->left,lefts,depth+1,ix*2, max);
        dfs(root->right,lefts,depth+1,ix*2 +1, max);
    }
public:
    int widthOfBinaryTree(TreeNode* root) {
        vector<double> lefts;
        double max = 0; 
        dfs(root,lefts,0,1,max);
        cout<<lefts.size();
        return max;
    }
    
};
