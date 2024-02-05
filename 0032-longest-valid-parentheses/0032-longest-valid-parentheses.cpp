class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLen = 0;
        stack<int> stk;
        stk.push(-1);  // Initialize the stack with a base element

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else {
                stk.pop();
                if (stk.empty()) {
                    stk.push(i);
                } else {
                    maxLen = max(maxLen, i - stk.top());
                }
            }
        }

        return maxLen;
    }
};