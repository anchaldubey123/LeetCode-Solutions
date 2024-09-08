class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int minn=0;
        for(int row=0; row < matrix.size(); row++){
         minn = 0;
        for(int col=0; col < matrix[0].size(); col++ )    {
            if(matrix[row][col] < matrix[row][minn])
            minn = col;
        }
        

        int max = 0;
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][minn] > max)
            max = matrix[i][minn];
        }
      vector<int> v;
        if(max==matrix[row][minn]){
            v.push_back(max);
            return v;
        }
        
    
        }

       return {};
    }
};
