






class Solution {
public:
    string shortestPalindrome(string s) {
        
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        string temp = s + "#" + rev;
        int n = temp.size();
        
        vector<int> lps(n, 0);
        
        int start = 0;   // length of previous prefix
        int end = 1;     // current index
        
        // Build LPS array
        while (end < n) {
            
            if (temp[start] == temp[end]) {
                start++;
                lps[end] = start;
                end++;
            } 
            else {
                if (start != 0) {
                    start = lps[start - 1];
                } 
                else {
                    lps[end] = 0;
                    end++;
                }
            }
        }
        
        int palLen = lps[n - 1];   // longest palindromic prefix
        
        string remaining = s.substr(palLen);
        reverse(remaining.begin(), remaining.end());
        
        return remaining + s;
    }
};



