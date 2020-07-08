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
    int maximum=0;
    int check(TreeNode* root){
        if (root==NULL) return 0;
        int l=0;
        int r=0;
        if ((root->left)&&(root->left->val==root->val)){
            l= check(root->left) + 1;
        }
        if ((root->right)&&(root->right->val==root->val)){
            r= check(root->right) + 1;
        }
        
        
        maximum=max(maximum,l+r);
        if ((root->left)&&(root->left->val!=root->val)){
            check(root->left);
        }
        if ((root->right)&&(root->right->val!=root->val)){
            check(root->right);
        }
    
        return max(l,r);
    }
    
    
    
    
    int longestUnivaluePath(TreeNode* root) {
        if (root==NULL) return 0;
        check(root);
        return maximum;
    }
};
