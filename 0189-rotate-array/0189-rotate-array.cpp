class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
       int n=nums.size()-k;
        reverse(nums.begin(),nums.begin()+n);

        reverse(nums.begin()+n,nums.end());
    
        reverse(nums.begin(),nums.end());
      //   int n=nums.size();
      // //   k = k % n; 
      //    reverse(nums.begin(), nums.end());
      //   reverse(nums.begin(), nums.begin() + k);
      //   reverse(nums.begin() + k, nums.end());
    }
};