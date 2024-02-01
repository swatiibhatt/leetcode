class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > vv(n, vector<int>(n));
        int count=1;
        int colBegin = 0;
        int rowBegin = 0;
        int colEnd = n - 1;
        int rowEnd = n - 1;
        while (colBegin <= colEnd && rowBegin <= rowEnd) {
            for (int i = colBegin; i <= colEnd; i++) {
                vv[rowBegin][i]=count++;
            }
            rowBegin++;
            for (int i = rowBegin; i <= rowEnd; i++) {
                vv[i][colEnd]=count++;
            }
            colEnd--;
            if (rowBegin <= rowEnd) {
                for (int i = colEnd; i >= colBegin; i--) {
                    vv[rowEnd][i]=count++;
                }
                rowEnd--;
            }
            if (colBegin <= colEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) {
                    vv[i][colBegin]=count++;
                }
                colBegin++;
            }
        }
        return vv;
    }
};
