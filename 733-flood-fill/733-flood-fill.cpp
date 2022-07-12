class Solution {
public:
    void dfs(vector<vector<int>> &image,int sr,int sc,int m,int n,int color,int source)
    {
        if(sr<0||sr>=m||sc<0||sc>=n) return;
        else if(image[sr][sc]!=source) return;
        
        image[sr][sc]=color;
        dfs(image,sr+1,sc,m,n,color,source);
        dfs(image,sr-1,sc,m,n,color,source);
        dfs(image,sr,sc+1,m,n,color,source);
        dfs(image,sr,sc-1,m,n,color,source);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int source=image[sr][sc];
        if(color==source) return image;
        dfs(image,sr,sc,m,n,color,source);
        return image;
    }
};