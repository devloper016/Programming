class Solution {
public:
    void sortt(vector<vector<int>> &mat,int r,int c,int m,int n){
        vector<int> v;
        int rw = r;
        int co = c;
        while(rw<m && co<n){
            v.push_back(mat[rw][co]);
            rw++;
            co++;
        }
        sort(v.begin(),v.end());
        int id=0;
        while(r<m && c<n){
            mat[r][c] = v[id++];
            r++;
            c++;
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        //cout<<m<<" "<<n<<endl;
        
        for(int i=0;i<m;i++){
            sortt(mat,i,0,m,n);
            
        }
        for(int j=1;j<n;j++){
            sortt(mat,0,j,m,n);
        }
        return mat;
    }
};
