class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int>r;
        vector<int>c;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                    
                }
            }
        }
        for(int i=0;i<r.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                    matrix[r[i]][j]=0;   //r[i] is imp that will tell which row not only the j
            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<c.size();j++){
                    matrix[i][c[j]]=0;  //[row][col]->
            }
        }

    }
};