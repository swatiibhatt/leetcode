class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temp) {
        int n = temp.size();
        std::vector<int> ans(n, 0);  // Initialize the result vector with zeros
        std::stack<int> indices;  // Stack to store indices

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