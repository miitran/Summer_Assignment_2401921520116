class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int ans=0;

        while(start<end)
        {
            int w=end-start;
            int h=min(height[start],height[end]);

            ans=max(ans, w*h);

            if(height[start]<height[end])
            start++;
            else
            end--;

        }

        return ans;
    }
};
