// class Solution {
// public:
//     int countSubstrings(string S) {
//         int len = S.length(), ans = 0;
//         for (int i = 0; i < len; i++) {
//             int j = i - 1, k = i;
//             while (k < len - 1 && S[k] == S[k+1]) k++;
//             ans += (k - j) * (k - j + 1) / 2, i = k++;
//             while (~j && k < len && S[k++] == S[j--]) ans++;
//         }
//         return ans;
//     }
// };
   #include <string>
using namespace std;

class Solution {
public:
    int count = 0;
    
    int countSubstrings(string s) {
        if (s == "" || s.length() == 0) return 0;
        
        for (int i = 0; i < s.length(); i++) { // i is the mid point
            extendPalindrome(s, i, i); // odd length;
            extendPalindrome(s, i, i + 1); // even length
        }
        
        return count;
    }
    
private:
    void extendPalindrome(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            count++; 
            left--; 
            right++;
        }
    }
};
