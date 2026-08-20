class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
    vector<int>num1;
    vector<int>num2;
    vector<int>result;
    int n = nums.size();

    num1.push_back(nums[0]);
    num2.push_back(nums[1]);
    for(int i = 2 ; i<n ; i++){
    if(num1.back()>num2.back()){
        num1.push_back(nums[i]);
    }else{
        num2.push_back(nums[i]);
    }
    }
       
       for( int x : num1){
         result.push_back(x);
       }

       for( int x : num2){
         result.push_back(x);
       }
     
       
       return result;
    }
};