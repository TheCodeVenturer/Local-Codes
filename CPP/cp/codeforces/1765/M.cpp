#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int root = sqrt(n);
        int i=2;
        for(;i<=root;i++)
        {
            if(n%i==0){
                cout<<n/i<<" "<<n-n/i<<endl;
                break;
            }
        }
        if(i>root)cout<<"1 "<<n-1<<endl;
    }
    return 0;
}
