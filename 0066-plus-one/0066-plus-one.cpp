class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
       int i = n-1;
       while(0<=i){
        if(digits[i]<9){
            digits[i] += 1;
            return digits;
        }

        digits[i]=0;
        i--;
       }
       digits.insert(digits.begin(),1);
       return digits;
    }
};