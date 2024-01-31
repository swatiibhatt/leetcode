class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int current = 1;  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                if (nums[i] == current) {
                     while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                        i++;  
                    }
                    current++;
                } else {
                    return current;
                }
            }
        }
       // current+=1;
        return current;
    }
};


