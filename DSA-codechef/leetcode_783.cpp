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
    vector<int> v;  //intitalize dynamic array
      void inorder(TreeNode* root)// inorder traversal for getting ascending order array
      {
          if(!root) return ;
          inorder(root->left);
          v.push_back(root->val);
          inorder(root->right);
      }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int mini=INT_MAX; //  initalize to  +ive infinity
        for(int i=1;i<v.size();i++)
        {
            mini=min(mini,v[i]-v[i-1]);
        }
       return mini; 
    }
};
