// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int>ans;
//         int count =0;
//         for (int i=0;i<nums.size();i++)
//         {
//                  for (int j=0;j<nums.size();j++)
//                  {
//                      if(nums[i]==nums[j])
//                      {
//                          count++;
//                          if(count==2)
//                          { for(int i=0;i<nums.size();i++)
//                          {                   
//                              ans.push_back(nums[i]);            
//                          }
//                          }
//                      }
                     
//                  }
//         }
//         return ans;
//     }
// };
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) {
            // If the vector has 0, 1, or 2 elements, no modifications are needed
            return n;
        }

        int count = 1;  // Count of occurrences for the current element
        int index = 1;  // Index to track the position of the next unique element

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) {
                // If the current element is equal to the previous one
                count++;

                if (count <= 2) {
                    // If count is less than or equal to 2, update the next unique element
                    nums[index++] = nums[i];
                }
            } else {
                // If the current element is different from the previous one, reset the count
                count = 1;
                nums[index++] = nums[i];
            }
        }

        // The modified vector is now in nums[0...index-1]
        return index;
    }
};
