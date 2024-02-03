class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        vector<int> charIndex(128, -1);//it is initializing the array to -1
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charIndex[s[right]] >= left) //if it gets true it means that the char has been seen then it will enter thr loop
            {
                left = charIndex[s[right]] + 1; 
            }
            charIndex[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};