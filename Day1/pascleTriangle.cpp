class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>f;
        f.push_back(1);
        ans.push_back(f);
        if(numRows==1)return ans;
        f.push_back(1);
        ans.push_back(f);
        if(numRows==2)return ans;
        for(int i=3;i<numRows+1;i++){
            vector<int>tmp(i,1);
            //tmp[0]=1;
            //tmp[i-1]=1;
            vector<int>ref(ans[i-2].begin(),ans[i-2].end());
            
            for(int j=1;j<i-1;j++){
                tmp[j]=ref[j]+ref[j-1];
            }
            
            
            ans.push_back(tmp);
        }
        return ans;
    }
};
