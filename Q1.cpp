class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        vector<int> m;
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                m.push_back(matrix[i][j]);
            }
                
        }
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(m[matrix[0].size()*i+j]==0){
                  cout<<"rohit";
                  for(int k=0;k<matrix.size();k++){
                      matrix[k][j]=0;
                  }
                  for(int k=0;k<matrix[0].size();k++){
                      matrix[i][k]=0;
                  } 
                }
            }
        }
    }
};