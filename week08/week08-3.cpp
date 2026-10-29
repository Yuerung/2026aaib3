// week08-3.cpp 學習計畫 Matrix 第2題 有點難
// Leetcode 54. Spiral Matrix 螺旋矩陣,繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        vector<int> ans;
        int left=0,right=N-1,up=0,down=M-1;
        // 中間要橢圓圈4個方向: 往右、往下、往左、往上
        while (ans.size()<M*N){
        int i,j;
        i=up;
        for(int j=left;j<=right;j++){
            ans.push_back(matrix[up][j]);
        }
        up++;

        j=right;
        for(int i=up;i<=down;i++){
             ans.push_back(matrix[i][right]);
        }
        right--;

        if(ans.size()==M*N) break;
        i=down
        for(int j=right;j>=left;j--){
             ans.push_back(matrix[down][j]);
        }
        down--;

        j=left
        for(int i=down;i>=up;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
     return ans;
  }
};
