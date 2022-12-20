#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        if(a>b&&c>d)
        {
            if((a>c&&b>d) ||(a<c&&b<d))
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        if(a<b&&c<d)
        {
            if((a>c&&b>d) ||(a<c&&b<d))
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}