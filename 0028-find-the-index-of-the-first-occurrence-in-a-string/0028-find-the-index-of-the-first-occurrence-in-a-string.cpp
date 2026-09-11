class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1=haystack.length();
        int s2=needle.length();
        if(s2>s1){
            return -1; 
        }
        for(int i=0;i<=s1-s2;i++)
        {
            bool found=true;
            for(int j=0;j<s2;j++)
            {
               if(haystack[i+j]!=needle[j]){
                    found=false;
                    break;
               } 
            }
            if(found){
                return i;
            }
        }
        return -1;
    }
};