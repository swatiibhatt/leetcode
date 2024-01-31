

class Solution {
public:
    vector<int> pivotArray(std::vector<int>& nums, int pivot)
    {
        vector<int>leftArray;
    vector<int>rightArray;
   int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==pivot){
            count++;
        }
        else if(nums[i]<pivot){
            leftArray.push_back(nums[i]);}
            else {rightArray.push_back(nums[i]);}
     }
    for(int j=0;j<count;j++)
    {
        leftArray.push_back(pivot);
    }
    leftArray.insert(leftArray.end(), rightArray.begin(), rightArray.end());

     return leftArray; 
    }
};
    
    //     std::vector<int> ans;
    //     for (int i = 0; i < nums.size(); i++) {
    //         if (pivot > nums[i]) {
    //             ans.push_back(nums[i]);
    //         } else if (nums[i] >= pivot) {
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     return ans;
    // }