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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) {
            return vector<vector<int> > ();
        }
        vector<vector<int> > result;

        queue<TreeNode*> queue;
        queue.push(root);
        bool lTR = true;

        while ( !queue.empty()) {
            int size = queue.size();
            vector<int> currLvl(size);
            for (int i = 0; i < size; i++) {
                TreeNode* currNode = queue.front();
                queue.pop();
                int index = (lTR) ? i : (size - 1 - i);
                currLvl[index] = currNode->val;
                if (currNode->left) {
                    queue.push(currNode->left);
                }
                if (currNode->right) {
                    queue.push(currNode->right);
                }
            }
            lTR = !lTR;
            result.push_back(currLvl);
        }
        return result;
    }
};
