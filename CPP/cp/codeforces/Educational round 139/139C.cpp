#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1[2];
        cin>>s1[0];
        cin>>s1[1];
        int black=0;
        for(int i=0;i<n;i++)
        {
            if(s1[0][i]=='B')black++;
            if(s1[1][i]=='B')black++;
        }
        int blackCount=0;
        int up=0;
        for(int i=0;i<n && blackCount!=black;i++)
        {
            
        }
    }
    return 0;
}