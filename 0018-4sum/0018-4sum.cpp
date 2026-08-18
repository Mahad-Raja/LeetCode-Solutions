class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
{
 continue;
}
            for(int j=i+1;j<nums.size()-1;j++)
            {
                if(j > i+1 && nums[j] == nums[j-1])
{
    continue;
}
                int left=j+1;
                 int right=nums.size()-1; 
                 while(left<right){    
                  long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target)
                      {
                       ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                       left++;
                       right--;

                       while(nums[left]==nums[left-1] &&left<right)
                       left++;

                       while(nums[right]==nums[right+1]&& left<right)
                       right--;
                      }
                      else if(target>sum)
                      left++;
                      else
                      right--;
                 }
            }
        }
        return ans;
    }
};