class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == NULL)
            return result;

        stack<TreeNode*> s1;
        stack<TreeNode*> s2;

        s1.push(root);


        while (!s1.empty() || !s2.empty()) {
        vector<int> ans;

            while (!s1.empty()) {
                TreeNode* temp = s1.top();
                s1.pop();

                ans.push_back(temp->val);

                if (temp->left)
                    s2.push(temp->left);

                if (temp->right)
                    s2.push(temp->right);

            }
            if (!ans.empty())
                result.push_back(ans);

            ans.clear();

            while (!s2.empty()) {
                TreeNode* temp = s2.top();
                s2.pop();

                ans.push_back(temp->val);

                if (temp->right)
                    s1.push(temp->right);

                if (temp->left)
                    s1.push(temp->left);

            }

            if (!ans.empty())
                result.push_back(ans);
        }
        // return ans;
        return result;
    }
};
