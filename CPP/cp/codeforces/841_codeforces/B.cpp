#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector <int>
const ll mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sol = 2022*(((n*(n+1))%mod)*(4*n - 1)%mod)/6;
        cout<<sol%mod<<endl;
    }
    return 0;
}