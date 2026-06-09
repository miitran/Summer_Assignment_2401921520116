class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>w;
        int start=0;
        int l=0;

        for(int end=0;end<s.size();end++)
        {
            while(w.count(s[end]))
            {
                w.erase(s[start]);
                start++;
            }

            w.insert(s[end]);
            l=max(l,end-start+1);
        }

        return l;
    }
};
