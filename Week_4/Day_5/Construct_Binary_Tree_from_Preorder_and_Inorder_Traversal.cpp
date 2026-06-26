int find(vector<int>inorder,int target,int start,int end)
 {
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==target)
        return i;
    }
    return -1;
 }
TreeNode*tree(vector<int>inorder,vector<int>preorder,int inStart,int inEnd,int index)
{
    if(inStart>inEnd)
    return NULL;

    TreeNode *root=new TreeNode(preorder[index]);

    int pos=find(inorder,preorder[index],inStart,inEnd);

    root->left=tree(inorder,preorder,inStart,pos-1,index+1);

    root->right=tree(inorder,preorder,pos+1,inEnd,index+(pos-inStart)+1);

    return root;
}

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        
        return tree(inorder,preorder,0,n-1,0);
    }
};
