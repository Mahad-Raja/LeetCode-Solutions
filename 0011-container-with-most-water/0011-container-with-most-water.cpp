class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int right=height.size()-1;
        int left =0;

        int max=0;
        while(left<right)
        {
            int current=min(height[left],height[right])*(right-left);
            if(max<current)
            {
                max=current;
            }
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        } 
        return max;
    }
};