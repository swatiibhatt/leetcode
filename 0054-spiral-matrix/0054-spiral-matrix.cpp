class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int colBegin=0;
        int rowBegin=0;
        int colEnd=n-1;
        int rowEnd=m-1;
        vector<int>ans;
       while (colBegin <= colEnd && rowBegin <= rowEnd) {
            for (int i = colBegin; i <= colEnd; i++) {
                ans.push_back(mat[rowBegin][i]);
            }
            rowBegin++;
            for (int i = rowBegin; i <= rowEnd; i++) {
                ans.push_back(mat[i][colEnd]);
            }
            colEnd--;
            if (rowBegin <= rowEnd) {
                for (int i = colEnd; i >= colBegin; i--) {
                    ans.push_back(mat[rowEnd][i]);
                }
                rowEnd--;
            }
            if (colBegin <= colEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) {
                    ans.push_back(mat[i][colBegin]);
                }
                colBegin++;
            }
        }

        return ans;
    }
};