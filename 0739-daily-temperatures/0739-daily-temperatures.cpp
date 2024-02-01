class Solution {
public:
   vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0); 
        stack<int> indices; 

        for (int i = 0; i < n; ++i) {
            while (!indices.empty() && temp[i] > temp[indices.top()]) {
                int prevIndex = indices.top();
                indices.pop();
                ans[prevIndex] = i - prevIndex;
            }
            indices.push(i);
        }

        return ans;
    }
};