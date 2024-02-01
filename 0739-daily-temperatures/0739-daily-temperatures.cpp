class Solution {
public:
   vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0); 
        stack<int> stack; 
        for (int i = 0; i < n; ++i) 
        {
            while (!stack.empty() && temp[i] > temp[stack.top()]) 
            {
                int prevIndex = stack.top();
                stack.pop();
                ans[prevIndex] = i - prevIndex;
            }
            stack.push(i);
        }
        return ans;
    }
};