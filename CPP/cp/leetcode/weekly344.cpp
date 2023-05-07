#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
class Solution {
public:
    int tot;
    int dfs(int i,vector<int>&cost,int n)
    {
        if(2*i+1>n)
            return cost[i];
        else{
            int left = dfs(2*i+1,cost,n);
            int right = dfs(2*i+2,cost,n);
            tot+=max(left,right)-min(left,right);
            return max(left,right);
        }
    }
    int minIncrements(int n, vector<int>& cost) {
        tot=0;
        dfs(0,cost,n);
        return tot;
    }
};
int main()
{
    Solution obj ;
    vector<vector<int>> queries = { {0,2},{1,2},{3,1},{1,1},{2,1} };
    vector<int> sol = obj.colorTheArray(4,queries);
    for(auto i:sol)
        cout<<i<<" ";
    return 0;
}

class Tri{
    public:
        int color,start,end;
        Tri(){
            color=0;
            start=0;
            end=0;
        }
};
class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<Tri> v1(n);
        vector<int>sol;
        for(vector<int> &temp: queries){
            int index = temp[0];
            int color = temp[1];
            v1[index].color=color;
            v1[index].start = index;
            v1[index].end = index;
            if ( index < (n-1) && index>0 && v1[index-1].color==color && v1[index+1].color==color)
            {
                v1[index].start = v1[index-1].start;
                v1[index].end = v1[index+1].end;
                v1[index-1].end = v1[index+1].end;
                v1[index+1].start = v1[index-1].start;
            }
            else if(index<n-1 && v1[index+1].color==color){
                v1[index].start = index;
                v1[index].end = v1[index+1].end;
                v1[index+1].start=index;
            }
            else if(n>0 && v1[index-1].color==color)
            {
                v1[index].end = index;
                v1[index].start = v1[index-1].start;
                v1[index-1].end=index;
            }
            sol.push_back(v1[index].end - v1[index].start);
            for(Tri T:v1)
                cout<<T.color<<" "<<T.start<<" "<<T.end<<"\t";
        }
        return sol;
    }
};