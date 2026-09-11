class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<int>ans;
      int i=0 ;
      int n= nums.size()-1;
      while(i<n){
        ans.push_back(nums[i]);
         ans.push_back(nums[n]);
         i++;
         n--;
      }
         if(i==n){
            ans.push_back(nums[i]);
         }
     return ans;
    }
};