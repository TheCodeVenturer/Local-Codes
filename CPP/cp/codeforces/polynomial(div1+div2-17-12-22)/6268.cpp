#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
vector<int> cycleLengthQueries(int n, vector<vector<int>> &queries)
{
    
}
int main()
{
    vector<vector<int>> v1;
    int n=3;
    vector<int> temp;
    temp.push_back(5);
    temp.push_back(3);
    v1.push_back(temp);
    vector<int>sol;
    sol = cycleLengthQueries(n,v1);
    cout<<"sol=";
    for(auto i:sol)
    cout<<i<<" ";
    return 0;
}