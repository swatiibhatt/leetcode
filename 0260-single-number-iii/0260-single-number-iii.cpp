class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        for (int i = 0; i < nums.size(); ++i) {
            int count = 0;

            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count == 1) {
             ans.push_back(nums[i]);
            }
        }
                return ans;
    }
};
