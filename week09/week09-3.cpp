class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int M = matrix.size(), N = matrix[0].size();
    int up = 0, down = M - 1, left = 0, right = N - 1;
    vector<int> ans; // 關鍵：宣告為 vector<int>
    while (up <= down && left <= right) {
        for (int i = left; i <= right; i++) ans.push_back(matrix[up][i]);
        up++;
        for (int i = up; i <= down; i++) ans.push_back(matrix[i][right]);
        right--;
        if (up <= down) { // 關鍵：檢查 bottom row 是否有效
            for (int i = right; i >= left; i--) ans.push_back(matrix[down][i]);
            down--;
        }
        if (left <= right) { // 關鍵：檢查 left column 是否有效
            for (int i = down; i >= up; i--) ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
}
};