class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
//need to use inside max function otherwise will not pass by time error
    