class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int maxxsum = INT_MIN;

        for (int x : nums){
            currsum += x;
            maxxsum = max(currsum,maxxsum);
            if(currsum<0){
                currsum = 0;
            }
        }
        return maxxsum;
    }
};