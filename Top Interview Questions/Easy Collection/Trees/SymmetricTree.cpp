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
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty()){
            TreeNode* tn1 = q.front();
            q.pop();
            TreeNode* tn2 = q.front();
            q.pop();
            if(tn1 == NULL && tn2 == NULL) continue;
            if (tn1 == NULL || tn2 == NULL) return false;
            if (tn1->val != tn2->val) return false;
            q.push(tn1->left);
            q.push(tn2->right);
            q.push(tn1->right);
            q.push(tn2->left);   
        }
        return true;
    }
};
