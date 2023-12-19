class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> v(m+2,vector<int>(n+2,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i+1][j+1] = img[i][j];
            }
        }
        int delrow[9] = {0,-1,-1,0,1,1,0,1,-1};
        int delcol[9] = {0,-1,0,-1,1,0,1,-1,1};
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                int cnt=0,sum=0;
                for(int k=0;k<9;k++){
                    int nrow = i+delrow[k];
                    int ncol = j+delcol[k];
                    if(v[nrow][ncol]!= -1){
                        sum+=v[nrow][ncol];
                        cnt++;
                    }
                }
                img[i-1][j-1] = sum/cnt;
            }
        }
        
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<img[i][j]<<' ';
        //     }
        //     cout<<'\n';
        // }
        return img;
    }
};
