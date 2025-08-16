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
    int maxPath = 0;

    void solved(TreeNode* root, int step, bool goLeft) {
        if (!root) return;   // base case

        maxPath = max(maxPath, step);

        if (goLeft) {
            // Next move should be right
            solved(root->left, 1, true);     // reset if go same direction
            solved(root->right, step + 1, false);
        } else {
            // Next move should be left
            solved(root->right, 1, false);
            solved(root->left, step + 1, true);
        }
    }

    int longestZigZag(TreeNode* root) {
        if (!root) return 0;
        solved(root, 0, true);   // assume first move is left
        solved(root, 0, false);  // assume first move is right
        return maxPath;
    }
};
