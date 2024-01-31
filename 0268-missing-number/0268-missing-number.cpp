class Solution {
public:
  
    int missingNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int current = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != current) {
                return current;
            } else {
                current++;
            }
        }
        return current;
    }
};