class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!= mpp.end())
            {
                a.push_back(mpp[target-nums[i]]);
                a.push_back(i);
                return a;
            }
            mpp[nums[i]]=i;
        }
        return a;
    }
};