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
    int maxLevelSum(TreeNode* root) {
        int resultLevel = 0;
        int maxsum = INT_MIN;

        queue<TreeNode*> q;
        q.push(root);

        int CurrentLevel = 1;

        while(!q.empty()){
            int n = q.size();
            int sum = 0;

            while(n--){
                TreeNode* tmp = q.front();
                q.pop();
                sum+= tmp->val;

                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            if(sum > maxsum){
                resultLevel = CurrentLevel;
                maxsum = sum;
            }
            CurrentLevel++;

        }
        return resultLevel;
    }
};