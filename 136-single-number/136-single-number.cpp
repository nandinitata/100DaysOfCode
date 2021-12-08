//Taking XOR of each element in the array
//bit manipulation
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int result=0;
       
        for(int i=0;i<nums.size();i++)
        {
            result^=nums[i];
        }
        
        return result;
    }
};