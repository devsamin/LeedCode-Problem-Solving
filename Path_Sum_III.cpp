class Solution {
public:
    int total = 0;

    void findpathsum(TreeNode* root, long long tar, long long currS) {
        if (root == NULL) return;
        currS += root->val;
        if (currS == tar) {
            total++;
        }
        findpathsum(root->left, tar, currS);
        findpathsum(root->right, tar, currS);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return 0;

        // Count paths starting from current node
        findpathsum(root, targetSum, 0);

        // Then check left and right subtrees
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);

        return total;
    }
};
