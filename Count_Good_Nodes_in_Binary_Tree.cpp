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
    void solved(TreeNode* root, int max_val, int &count){
        if(root == NULL){
            return;
        }
        if(root->val >= max_val){
            count++;
            max_val = root->val;
        }
        solved(root->left, max_val, count);
        solved(root->right, max_val, count);
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        solved(root, INT_MIN, count );
        return count;
    }
};