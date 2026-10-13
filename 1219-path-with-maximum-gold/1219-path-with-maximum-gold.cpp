class Solution {
public:
    vector<vector<int>> directions{{-1,0},{1,0},{0,1},{0,-1}};
    int DFS(vector<vector<int>>& grid,int i, int j){
        int m=grid.size();
        int n= grid[0].size();
        if(i>=m || i < 0  || j>=n || j < 0 || grid[i][j]==0){
            return 0;
        }
    int maxgold=0;
        int originalgoldvalue=grid[i][j];
        grid[i][j]=0;

        for( vector<int> &dir:directions){
            int new_i= i + dir[0];
            int new_j= j + dir[1];
            
            maxgold=max(maxgold,DFS(grid,new_i,new_j));
        }
        grid[i][j]=originalgoldvalue;
        return originalgoldvalue+maxgold;
        
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size();
        int n= grid[0].size();

        int maxgold=0;

        for( int i =0;i<m;i++){
            for( int j=0;j<n;j++){
                if( grid[i][j] !=0){

                    maxgold=max(maxgold,DFS(grid,i,j));
                }
            }
        }
        return maxgold;
    }
};