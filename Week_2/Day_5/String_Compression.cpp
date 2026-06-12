class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ind=0;
        while(i<chars.size())
        {
            char curr=chars[i];
            int count=0;

            while(i<chars.size()&& chars[i]==curr)
            {
                count++;
                i++;
            }
            chars[ind++]=curr;

            if(count>1)
            {
               string c=to_string(count);

               for(char k: c)
                {
                    chars[ind++]=k;
                } 
            }
            
        }

        return ind;
    }
};
