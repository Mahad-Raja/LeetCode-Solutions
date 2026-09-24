class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int i = nums.size() - 1;

while (i >= 0)
{
    if (nums[i]==target)
    {
        return i;
    }
    else if (target<nums[i])
    {
        i--;
    }
    else
    {
        return i+1;
    }
}
return 0;
    }
};