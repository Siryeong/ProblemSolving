class Solution {
public:
    void dfs(vector<vector<int>> &image, int sr, int sc, int newColor){
        if(image[sr][sc]==newColor) return;
        
        int t = image[sr][sc];
        image[sr][sc]=newColor;
        if(sr > 0 && image[sr-1][sc]==t) floodFill(image, sr-1, sc, newColor);
        if(sr < image.size()-1 && image[sr+1][sc]==t) floodFill(image, sr+1, sc, newColor);
        if(sc > 0 && image[sr][sc-1]==t) floodFill(image, sr, sc-1, newColor);
        if(sc < image[sr].size()-1 && image[sr][sc+1]==t) floodFill(image, sr, sc+1, newColor);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // top bot left right
        dfs(image, sr, sc, newColor);
        return image;
    }
};