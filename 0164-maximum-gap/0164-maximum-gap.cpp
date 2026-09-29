class Solution {
public:
    int maximumGap(vector<int>& nums) {
        long int c=0,ans=0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++){
            c = nums[i]-nums[i-1];
            if(ans<c){
                ans = max(ans,c);
            }
        }
        return ans;
    }
};