class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       // vector<vector<int>> mat;
        int length=matrix.size();
        for(int i=0;i<length;i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
         for(int i=0;i<length;i++)
         {
             reverse(matrix[i].begin(),matrix[i].end());
         }
    }
};
// class Solution {
// public:
//     void rotate(std::vector<std::vector<int>>& matrix) {
//         int length = matrix.size();

//         // Transpose the matrix
//         for (int i = 0; i < length; i++) {
//             for (int j = i + 1; j < length; j++) {
//                 std::swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // Reverse each row of the transposed matrix
//         for (int i = 0; i < length; i++) {
//             std::reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };