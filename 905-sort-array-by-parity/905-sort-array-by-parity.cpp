class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i,j=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};