class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sol=0;
        for(int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[i].size(); j++){
                int t = 4;
                if(grid[i][j]==1){
                    // top bot left right
                    if(i > 0 && grid[i-1][j]==1) t--;
                    if(i < grid.size()-1 && grid[i+1][j]==1) t--;
                    if(j > 0 && grid[i][j-1]==1) t--;
                    if(j < grid[i].size()-1 && grid[i][j+1]==1) t--;
                    sol+=t;
                }
            }
        return sol;
    }
};