class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }   
        vector<string> result;
        string temp;
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        generate(digits, 0, temp, result, mp); 
        return result;
    }
    void generate(const string& digits, int idx, string& temp, vector<string>& result, const unordered_map<char, string>& mp) {
        if (idx == digits.length()) {
            result.push_back(temp);
            return;
        }
        
        char ch = digits[idx];
        string str = mp.at(ch);
        for (char c : str) {
            temp.push_back(c);
            generate(digits, idx + 1, temp, result, mp);
            temp.pop_back();
        }
    }
};