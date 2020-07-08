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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> queue;
        queue.push(root);
        
        while(!queue.empty()){
            int size = queue.size();
            vector<int> currLvl;
            for(int i=0; i<size; i++){
                TreeNode* currNode = queue.front();
                queue.pop();
                currLvl.push_back(currNode->val);
                if(currNode->left != NULL){
                    queue.push(currNode->left);
                }
                if(currNode->right != NULL){
                    queue.push(currNode->right);
                }
            }
            result.push_back(currLvl);
        }
        return result;
    }
};
