class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxLen=0;
        for(int i=0;i<s.size();i++)
        {
            bool visited[256]={false};
            for(int j=i;j<s.size();j++)
            {
                if(visited[s[j]])
                {
                    break;
                }

                visited[s[j]]={true};

                int len=j-i+1;
                if(len>maxLen)
                maxLen=len;
            }
        }
        return maxLen;
    }
};