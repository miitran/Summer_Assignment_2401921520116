void inOrder(TreeNode*root,vector<int>&ans)
 {
    if(root==NULL)
    return;

    inOrder(root->left,ans);
    ans.push_back(root->val);
    inOrder(root->right,ans);


 }
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       vector<int>ans;
       inOrder(root,ans);

       for(int i=1;i<ans.size();i++)
       {
        if(ans[i]<=ans[i-1])
        return 0;
       } 

       return 1;
    }
};
