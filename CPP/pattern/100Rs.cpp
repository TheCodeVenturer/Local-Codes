#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> temp(n,' ');
    vector<vector<char>>pattern(n,temp);
    for(int i=0;i<n/2+1;i+=2)
    {
        if(i==0)
            for(int j=i;j<n-i;j++)
                pattern[i][j]='|';
        else
            for(int j=i-1;j<n-i;j++)
                pattern[i][j]='|';
        int k = n-i-1;
        for(int j=i;j<n-i;j++)
            pattern[j][k]='|';
        k = n-i-1;
        for(int j=n-1-i;j>=i;j--)
            pattern[k][j]='|';
        for(int j=n-1-i;j>=i+2;j--)
            pattern[j][i]='|';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<pattern[i][j];
        cout<<endl;
    }
    return 0;
}