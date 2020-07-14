    /**
    * Definition for a binary tree node.
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    * };
    */

    class Solution {
    public:
        bool helper(TreeNode *leftnode, TreeNode *rightnode){
            if(leftnode==NULL&&rightnode==NULL)return true;
            else if(leftnode==NULL&&rightnode!=NULL)return false;
            else if(leftnode!=NULL&&rightnode==NULL)return false;
            else{
                if(leftnode->val!=rightnode->val)return false;
                else{
                    return helper(leftnode->right,rightnode->left)&& helper(leftnode->left,rightnode->right);
                }
            }
        }
        bool isSymmetric(TreeNode* root) {
            if(root==NULL)return true;
            else{
                return helper(root->left,root->right);
            }
            
        }
    };