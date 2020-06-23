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
    int height(TreeNode* root) {
        return root == NULL ? -1 : 1 + height(root->left);
    }
public:
    int countNodes(TreeNode* root) {
         int h = height(root);
        return h < 0 ? 0 :
               height(root->right) == h-1 ? (1 << h) + countNodes(root->right)
                                         : (1 << h-1) + countNodes(root->left);
        
        
    }
};
