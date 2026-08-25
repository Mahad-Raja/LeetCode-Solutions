class Solution {
public:
bool isPalindrome(const string& s,int start,int end)
{
    while(start<end)
    {
        if(s[start]!=s[end])
        return false;

        end--;
        start++;
    }
    return true;
}
    string longestPalindrome(string s) {
        int maxLen=0;
        int startIndex=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPalindrome(s,i,j))
                {
                    int len=j-i+1;
                    if(len>maxLen)
                    {
                        maxLen=len;
                        startIndex=i;
                    }
                }
            }
        }
        string ans="";
        for(int i=startIndex;i<startIndex+maxLen;i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};