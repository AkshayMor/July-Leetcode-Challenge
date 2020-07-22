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
        vector<vector<int>>zigzag;
        if(root==NULL) return zigzag;
        queue<TreeNode*>que;
        que.push(root);
        que.push(NULL);
        int i=1;
        while(que.size()!=0){
            vector<int> level;
            TreeNode* cur = que.front();
            while(cur!=NULL){
                if(cur->left!=NULL) que.push(cur->left);
                if(cur->right!=NULL) que.push(cur->right);
                level.push_back(cur->val);
                que.pop();
                cur=que.front();
            }
            que.push(NULL);
            que.pop();
            if(level.size()==0) break;
            if(i%2==0){
                reverse(level.begin(),level.end());
            }
            
            i++;
            zigzag.push_back(level);
            
        }
        
        
        return zigzag;
    }
};