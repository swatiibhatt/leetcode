class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) {
            return n;
        }

        int count = 1;  
        int index = 1;  

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) {
                count++;

                if (count <= 2) {
                    nums[index++] = nums[i];
                }
            } else {
                count = 1;
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};
