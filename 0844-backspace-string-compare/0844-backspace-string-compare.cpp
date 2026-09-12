class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
          stack<char> cmp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                st.pop();
            }
        }
          for(int i=0;i<t.size();i++)
        {
            if(t[i]>='a' && t[i]<='z')
            {
                cmp.push(t[i]);
            }
            else
            {
                if(!cmp.empty())
                cmp.pop();
            }
        }
        if(st==cmp)
        {
            return true;
        }
        else
        return false;

    }
};