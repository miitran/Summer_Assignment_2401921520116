class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxl=1;

        for(int i=0;i<s.size();i++)
        {
            int l=i;
            int r=i;

            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(r-l+1>maxl)
                {
                    maxl=r-l+1;
                    start=l;
                }

                l--;
                r++;
            }

            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(r-l+1>maxl)
                {
                    maxl=r-l+1;
                    start=l;
                }

                l--;
                r++;
            }
        }

        return s.substr(start,maxl);
    }
};
