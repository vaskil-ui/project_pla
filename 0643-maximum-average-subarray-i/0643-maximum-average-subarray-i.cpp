class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
     int s = 0;
    int e = k-1;
    double sum=0;
   while(s<=e){
       sum += nums[s];
       s++;
   }
   double avg = sum/k;
    while(e+1<n){
     sum -= nums[s-k];
     e++;
     sum += nums[e];
     double currAvg = sum/k;
     avg = max(avg,currAvg);
     s++;
    }
    
    return avg;
    }
};