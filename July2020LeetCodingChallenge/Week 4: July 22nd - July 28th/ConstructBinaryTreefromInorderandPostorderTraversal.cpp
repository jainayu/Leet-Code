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
    int searchValue (vector<int>& vec, int start, int end, int value) { 
        int i = 0;
        for (i = start; i <= end; i++) { 
            if (vec[i] == value) {
                break; 
            }
        } 
        return i; 
    } 
    TreeNode* buildUtil(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int* postIndex) {
        if (inStart > inEnd) {
            return NULL; 
        }
        
        int value = postorder[*postIndex];
        TreeNode* node = new TreeNode(value);
        
        (*postIndex)--;
        
        if (inStart == inEnd) { 
            return node; 
        }
        
        int inIndex = searchValue(inorder, inStart, inEnd, node->val);
        
        node->right = buildUtil(inorder, postorder, inIndex + 1, inEnd, postIndex); 
        node->left = buildUtil(inorder, postorder, inStart, inIndex - 1, postIndex); 
        
        return node;         
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size() - 1;
        return buildUtil(inorder, postorder, 0 , postorder.size() - 1, &postIndex);
    }
};
