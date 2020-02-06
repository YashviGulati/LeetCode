/*
Given a matrix A, return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<A[0].size();i++){
            temp.clear();
             for(int j=0;j<A.size();j++){
                 temp.push_back(A[j][i]);
             }
            ans.push_back(temp);
        }
        return ans;
    }
};
