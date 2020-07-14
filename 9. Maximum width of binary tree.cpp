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
    int widthOfBinaryTree(TreeNode* root) {
       if (root == NULL) 
        return 0; 

    int result = 0; 
  
   
    queue<pair<TreeNode*,int>> q; 
    q.push(make_pair(root,1));
    while (!q.empty()) 
    { 
        int count = q.size() ; 
  result=max(result,(q.back().second-q.front().second)+1);
        while (count--) 
        { 
            pair<TreeNode*,int>temp = q.front(); 
            q.pop(); 
       
            if (temp.first->left != NULL) 
            {q.push(make_pair(temp.first->left,2*(long)temp.second)); }
           
            if (temp.first->right != NULL) 
            { q.push(make_pair(temp.first->right,2*(long)temp.second+1)); }
        
    } 
 
        
    }
        return result;
        
    }
};