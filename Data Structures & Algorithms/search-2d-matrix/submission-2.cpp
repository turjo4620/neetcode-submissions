class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, r = m - 1, mid, target_row;
        while(l <= r){
            mid = l + (r  - l) / 2;
            if(matrix[mid][0] <= target && matrix[mid][n - 1] >= target){
                target_row = mid;
                break;
            }
            else if(matrix[mid][0] < target){
                l++;
            }
            else{
                r--;
            }
        }
        l = 0, r = n - 1;
        while(l <= r){
            mid = l + (r  - l) / 2;
            if(matrix[target_row][mid] == target){
                return true;
            }
            else if(matrix[target_row][mid] < target){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
    }
};
