class Solution {
public:
  
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
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