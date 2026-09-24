class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
             int digitsum=0;
            while(nums[i]>0)
            {
            int digit=nums[i]%10;
            digitsum+=digit;
            nums[i]/=10;
            }

            if(i==digitsum)
            return i;
        }
        return -1;
    }
};