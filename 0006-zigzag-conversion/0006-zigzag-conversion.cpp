class Solution {
public:
    string convert(string s, int numRows)
    {
        if(numRows == 1)
            return s;

        string row[1000];

        int currentrow = 0;
        int direction = 1;

        for(int i = 0; i < s.size(); i++)
        {
            row[currentrow] += s[i];

            if(currentrow == 0)
                direction = 1;
            else if(currentrow == numRows - 1)
                direction = -1;

            currentrow += direction;
        }

        string ans = "";

        for(int i = 0; i < numRows; i++)
        {
            ans += row[i];
        }

        return ans;
    }
};