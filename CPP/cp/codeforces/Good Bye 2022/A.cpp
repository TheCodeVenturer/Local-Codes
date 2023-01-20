#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector <ll> v1(n);
        vector <ll> v2(m);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        for(int i=0;i<m;i++)
            cin>>v2[i];
        sort(v1.begin(),v1.end());
        ll sum=0;
        if(n>=m)
        {
            for(auto i:v2)
                sum+=i;
            for(int i=v1.size()-1;i>m-1;i--)
                sum+=v1[i];
        }
        else{
            for(auto i:v2)
                v1.push_back(i);
            sort(v1.begin(),v1.end());
            for(int i=v1.size()-1;i>m-1;i--)
                sum+=v1[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}