class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
      //   int n=nums.size();
      // //   k = k % n; 
      //    reverse(nums.begin(), nums.end());
      //   reverse(nums.begin(), nums.begin() + k);
      //   reverse(nums.begin() + k, nums.end());
    }
};