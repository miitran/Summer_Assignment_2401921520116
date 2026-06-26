int diameter(TreeNode*root,int &d)
 {
    if(root==NULL) return 0;

    int left=diameter(root->left,d);
    int right=diameter(root->right,d);

    d=max(d,left+right);

    return 1+max(left,right);
 }

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        diameter(root,d);

        return d;
    }
};
