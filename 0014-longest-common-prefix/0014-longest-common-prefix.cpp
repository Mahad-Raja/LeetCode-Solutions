class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref=strs[0];
        string ans="";
        for (int i=0;i<ref.length();i++)
        {
            bool same = true;
            for(int j=1;j<strs.size();j++)
            {
                if(ref[i] != strs[j][i])
                {
                    same=false;
                    break;
                }
            }
            if (!same)
            {
                break;
            }
            else
            {
                ans+=ref[i];
            }

        }
        if(ans.length()==0)
        {
            return "";
        }
        else
        return ans;
    }
};