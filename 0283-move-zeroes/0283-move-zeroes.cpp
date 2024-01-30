class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> zero;
       vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero.push_back(nums[i]);
            } else {
                ans.push_back(nums[i]);
            }
        }
        ans.insert(ans.end(), zero.begin(), zero.end());
        nums = ans;
    }
};
