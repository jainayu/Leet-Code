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
    int getSum(TreeNode* node, int sum){
        if(node==NULL) return 0;
        if(node->left == NULL && node->right == NULL) return sum*10 + node->val;
        return getSum(node->left, sum*10 + node->val) + getSum(node->right, sum*10 + node->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        return getSum(root, 0);
    }
};
