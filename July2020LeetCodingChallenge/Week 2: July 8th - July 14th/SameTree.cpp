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
 
/*
	Solution 1
*/
 
class Solution {
    vector<string> tree1, tree2;
    void savePreorder(TreeNode* node, vector<string>& tree) { 
        if (node == NULL) {
            tree.push_back("null");
            return;
        }
        tree.push_back(to_string(node->val));
        savePreorder(node->left, tree);
        savePreorder(node->right, tree); 
    } 
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        savePreorder(p, tree1);
        savePreorder(q, tree2);
        
        if(tree1.size() == tree2.size()){
            for(int i=0; i<tree1.size(); i++){
                if(tree1[i]!=tree2[i]){
                    return false;
                }
            }
        } else {
            return false;
        }
        return true;
    }
};

/*
 	Solution 2
*/


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (q == NULL || p == NULL) {
            return false;
        }
        if (p->val != q->val) {
            return false;
        }
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
    }
};
