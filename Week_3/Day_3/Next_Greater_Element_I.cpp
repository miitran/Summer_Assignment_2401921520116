class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>s;

        for(int x : nums2)
        {
            while(!s.empty() && x>s.top())
            {
                m[s.top()]=x;
                s.pop();
            }

            s.push(x);

        }

        vector<int>ans;
        for(int i : nums1)
        {
            if(m.count(i))
            ans.push_back(m[i]);
            else
            ans.push_back(-1);
        }

        return ans;
    }
};
