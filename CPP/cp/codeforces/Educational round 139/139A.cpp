#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fre=log10(n);
        int ans = fre*9;
        while(n>9)
            n=n/10;
        ans+=n;
        cout<<ans<<endl;
    }
    return 0;
}