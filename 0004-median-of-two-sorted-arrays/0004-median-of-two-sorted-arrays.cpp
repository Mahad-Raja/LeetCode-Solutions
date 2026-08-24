class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> arr;
       arr = nums1;
      for(int i = 0; i < nums2.size(); i++)
      {
          arr.push_back(nums2[i]);
      }
     sort(arr.begin(), arr.end());

        int n = arr.size();
        if(n % 2 == 1)
        {
            return arr[n/2];
        }
        else
        {
            int i=arr[(n/2)-1];
            int j=arr[n/2];
            return (i+j)/2.0;
        }
    }
};