//using map since set stores only distinct values
//https://www.youtube.com/watch?v=XZ6ZL1Qg6og
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m; //map m
        vector<int>ans; //result that gives the intersecting array
        for(int i=0;i<nums1.size();i++)// first array
        {
          m[nums1[i]]++;  //building the map 2:2
        }
        for(int i=0;i<nums2.size();i++)//second array
        {
           auto it=m.find(nums2[i]);
           if(it!=m.end()&& it-> second>0)
           {
               ans.push_back(nums2[i]);
               it ->second--;
           }
        }
        return ans;
    }
};