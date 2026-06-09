class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;

        vector<int>frq1(26,0);
        vector<int>frq2(26,0);

        for(int i=0;i<s1.size();i++)
        {
            frq1[s1[i]-'a']++;
            frq2[s2[i]-'a']++;
        }

        if(frq1==frq2) return true;

        for(int i=s1.size();i<s2.size();i++)
        {
            frq2[s2[i]-'a']++;
            frq2[s2[i-s1.size()]-'a']--;

            if(frq1==frq2) return true;
        }

        return false;
    }
};
