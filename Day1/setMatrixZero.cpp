class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int flagr=0,flagc=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0) flagc=1;
        }
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0) flagr=1;
        }

        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                //if(matrix[0][j]==0) flagc=1;
                //if(matrix[i][0]==0) flagr=1;
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(flagc){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
        if(flagr){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
    }
};
