class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 1;

        for(int i = 0; i < s.length(); i++){

            
            int l = i, r = i;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                if(r - l + 1 > maxLen){
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }

            
            l = i;
            r = i + 1;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                if(r - l + 1 > maxLen){
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna