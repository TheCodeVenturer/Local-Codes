#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
class Solution {
public:
    int maxi = 0;
    int help(int i,int j,int tot,vector<vector<int>>&grid,int n,int m)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return tot;
        tot = tot + grid[i][j];
        // cout<<i<<" "<<j<<
        int row[4] = {-1,1,0,0};
        int col[4] = {0,0,1,-1};
        for(int idx=0;idx<4;idx++){
            int val =grid[i][j];
            grid[i][j]=0;
            tot += help(i+row[idx],j+col[idx],tot,grid,n,m);
            grid[i][j]=val;
        }
        return tot;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            if(grid[i][j]>0){
                maxi=max(maxi,help(i,j,0,grid,grid[0].size(),grid.size()));
            }
        }
        return maxi;
    }
};
int main()
{
    vector<vector<int>>grid={{4,0}};
    Solution sol;
    int ans = sol.findMaxFish(grid);
    cout<<ans;
    return 0;
}