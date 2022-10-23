class Solution {
public:
    void sol(vector<vector<int>> &image,int i,int j,int oc,int nc){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size()|| image[i][j]!=oc)
           return;
           image[i][j] = nc;
            sol(image,i+1,j,oc,nc);
            sol(image,i-1,j,oc,nc);
            sol(image,i,j-1,oc,nc);
            sol(image,i,j+1,oc,nc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]!=color){
            sol(image,sr,sc,image[sr][sc],color);
        }
        return image;
    }
};
