class Solution {
public:
    int compress(vector<char>& chars) {
 /*   map<char,int>mt;
    for(char ch : chars){
        mt[ch]++;
    }
     string ans="";
    for( auto x : mt){
      char cha = x.first;
      int fra = x.second;
      ans += cha;
      if(fra>1){
        ans += to_string(fra);
      }
    }
    for (int i=0 ; i<ans.size() ; i++){
        chars[i] = ans[i];
    }
    return ans.size();*/
    string ans= "";
    int n = chars.size();
    for (int i=0 ; i<n ; i++){
        int count =1;
        while (i+1<n && chars[i]==chars[i+1]){
            i++;
            count++;
        }
        ans += chars[i];
        if(count>1){
            ans += to_string(count);
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        chars[i] = ans[i];
    }
    return ans.size();
    }
};