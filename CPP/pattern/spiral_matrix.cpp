#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size(),col=matrix[0].size();
    vector<int> sol;
    int pos=0,l=0,r=col-1,t=0,b=row-1;
    while(sol.size()<row*col)
    {
        for(pos=l;pos<=r;pos++)
            sol.push_back(matrix[t][pos]);
        t++;
        for(pos=t;pos<=b;pos++)
            sol.push_back(matrix[pos][r]);
        r--;
        for(pos=r;pos>=l;pos--)
            sol.push_back(matrix[b][pos]);
        b--;
        for(pos=b;pos>=t;pos--)
            sol.push_back(matrix[pos][l]);
        l++;
    }
    return sol;
}
};
int main(){
    vector<vector<int>> matrix;
    for(int i=0;i<3;i++)
    {
        vector<int> temp(3);
        for(int j=0;j<3;j++)
        {
            cin>>temp[j];
        }
        matrix.push_back(temp);
    }
    vector <int>sol=Solution::spiralOrder(matrix);
    for(auto i: sol)
        cout<<i<<" ";
}
