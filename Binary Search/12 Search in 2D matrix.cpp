class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n = matrix.size();   
     int m = matrix[0].size();   
     int row =0,  col = m -1;
     while(row < n && col >= 0){
    // int mid = (low+ high ) / 2;
    //  int row = mid /m;
    //  int col = mid %m;
     if(matrix[row][col] == target){
      return true;
     }
     else if(matrix[row][col] < target){
        row++;
     }else{
       col--;
     }
    
     }
      return false;
    }
};

