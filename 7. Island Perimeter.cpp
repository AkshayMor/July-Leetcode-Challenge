class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0, cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size();j++)
                {
                    if(grid[i][j]==1)
                    {
                        count ++;
                        if(i!=0 && grid[i-1][j] == 1) cnt++;
                        if(j!=0 && grid[i][j-1] == 1) cnt++;
                    }
                }
        }
        return 4*count-cnt*2;
        
    }
};