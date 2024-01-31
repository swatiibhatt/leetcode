//#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;  // If the input vector is empty, there are no duplicates to remove.
        }

        int uniqueCount = 1;  // At least one unique element (the first one).
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[uniqueCount++] = nums[i];
            }
        }

        return uniqueCount;
    }
};
