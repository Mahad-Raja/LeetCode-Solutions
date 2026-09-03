class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        int jumps = 0;
        int reach = 0;
        int end = 0;

        for (int i = 0; i < n - 1; i++) {
            reach = max(reach, i + nums[i]);

            if (i == end) {
                jumps++;
                end = reach;
            }
        }

        return jumps;
    }
};