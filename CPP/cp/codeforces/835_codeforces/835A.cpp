#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int maxi = max(a,b);
        maxi = max(maxi,c);
        int mini = min(a,b);
        mini = min(mini,c);
        cout<<(a+b+c)-maxi-mini<<endl;
    }
    return 0;
}