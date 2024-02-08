#include <vector>

class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        double product = 1.0;
        
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                return 0;  
            else
            product *= (nums[i]);
        }

        return (product > 0) ? 1 : -1; 
    }
};
