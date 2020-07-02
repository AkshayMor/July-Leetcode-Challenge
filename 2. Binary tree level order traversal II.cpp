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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>order;
        queue<TreeNode*>line;
        if(root==NULL) return order;
        line.push(root);
        while(line.size()!=0){
            line.push(NULL);
            vector<int>level;
            while(line.front()!=NULL){
                TreeNode* cur = line.front();
                level.push_back(cur->val);
                if(cur->left) line.push(cur->left);
                if(cur->right) line.push(cur->right);
                line.pop();   
            }
            line.pop();
            order.push_back(level);
        }
        reverse(order.begin(),order.end());
        return order;
    }
};