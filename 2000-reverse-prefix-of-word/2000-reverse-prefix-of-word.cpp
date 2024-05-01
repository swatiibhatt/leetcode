class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int idx = word.find(ch);
        
        if (idx != string::npos) {
            reverse(word.begin(), word.begin() + idx + 1);
            ans = word;
        } else {
            ans = word;
        }
        
        return ans;
    }
};