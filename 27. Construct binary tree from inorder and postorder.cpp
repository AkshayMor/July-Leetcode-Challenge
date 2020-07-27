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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return solve(inorder,0,inorder.size(),postorder,0,postorder.size());
    }
    
    TreeNode* solve(vector<int>& inorder,int i_first,int i_last,vector<int>& postorder,int p_first,int p_last)
    {
        if(i_first >= i_last || p_first >= p_last)
            return NULL;
        
        int mid = postorder[p_last - 1];
        
        auto f = find(inorder.begin() + i_first,inorder.begin() + i_last,mid);
        
        int dis = f - inorder.begin() - i_first;
        
        TreeNode* root = new TreeNode(mid);
        root -> left = solve(inorder,i_first,i_first + dis,postorder,p_first,p_first + dis);
        root -> right = solve(inorder,i_first + dis + 1,i_last,postorder,p_first + dis,p_last - 1);
        
        return root;
        
    }
};