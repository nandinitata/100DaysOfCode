//[0,0,0,1,1,1,2,2,3,3,4]
//[0,1,1,1,1,2,2,3,3,4]
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1;
        int n=nums.size();
        if(n==0 || n==1)
        {
            return n;
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[a-1])
            {
                nums[a]=nums[i];
                a++;
        
            }
        }
        return a;
        
    }
};