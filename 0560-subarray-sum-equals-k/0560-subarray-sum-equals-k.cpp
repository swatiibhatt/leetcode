#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // Initialize with 0 sum occurrence
        
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            int complement = sum - k;
            count += prefixSumCount[complement];
            prefixSumCount[sum]++;
        }
        
        return count;
    }
};
