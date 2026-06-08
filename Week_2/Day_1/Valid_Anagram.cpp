class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq[26]={0};

        for(char i : s) freq[i-'a']++;

        for(char j : t) freq[j-'a']--;

        for(int k : freq)
        {
            if(k!=0) return false;
        }

        return true;

    }
};
