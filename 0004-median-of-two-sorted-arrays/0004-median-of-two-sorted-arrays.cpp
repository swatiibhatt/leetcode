class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        sort(merged.begin(), merged.end());
        int  l=merged.size();
        if(l%2==0)
        { return ((merged[l/2-1]+merged[l/2])/2.0);
        }
        else return merged[l/2];
    }
};