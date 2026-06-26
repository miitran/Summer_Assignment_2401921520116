int pathSum(TreeNode* root, int &sum)
{
    if(root == NULL)
        return 0;

    int left = max(0, pathSum(root->left, sum));
    int right = max(0, pathSum(root->right, sum));

    // Update global maximum
    sum = max(sum, root->val + left + right);

    // Return maximum single path
    return root->val + max(left, right);
}

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        pathSum(root, sum);
        return sum;
    }
};
