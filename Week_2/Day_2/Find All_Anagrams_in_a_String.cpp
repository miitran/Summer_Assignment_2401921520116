class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()) return ans;

        vector<int>frqp(26,0);
        vector<int>w(26,0);

        for(int i=0;i<p.size();i++)
        {
            frqp[p[i]-'a']++;
            w[s[i]-'a']++;
        }

        if(frqp==w) ans.push_back(0);

        for(int i=p.size();i<s.size();i++)
        {
            w[s[i]-'a']++;
            w[s[i-p.size()]-'a']--;

            if(frqp==w)
            ans.push_back(i-p.size()+1);
        }

        return ans;

    }
};
