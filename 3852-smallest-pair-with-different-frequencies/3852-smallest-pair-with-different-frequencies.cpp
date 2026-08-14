class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int mac = 0, x = nums[0];
        for(int num : nums) {
            mac = max(num, mac);
            x = min(num, x);
        }
        vector<int> freq(mac + 1, 0);
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(int i = x + 1; i < freq.size(); i++) {
            if(freq[i] != 0 && freq[i] != freq[x]) {
                return {x, i};
            }
        }
        return {-1, -1};
    }
};