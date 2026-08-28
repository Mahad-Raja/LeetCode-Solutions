class Solution {
public:
    int myAtoi(string s) {
        int skip = 0;
        while (skip < s.length() && s[skip] == ' ') {
            skip++;
        }
        int sign = 1;
        if (skip < s.length() && s[skip] == '-') {
            sign = -1;
            skip++;
        }
        else if (skip < s.length() && s[skip] == '+') {
            skip++;
        }
        long long num = 0;
        for (int i = skip; i < s.length(); i++) {

            if (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                if (sign == 1 && num > INT_MAX) {
                    return INT_MAX;
                }
                if (sign == -1 && -num < INT_MIN) {
                    return INT_MIN;
                }
            }
            else {
                break;
            }
        }

        return sign * num;
    }
};