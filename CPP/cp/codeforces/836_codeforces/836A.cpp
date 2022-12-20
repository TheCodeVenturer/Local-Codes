#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        for(int i = s.length()-1;i>=0;i--){
            s.push_back(s[i]);
        }
        s.push_back('\0');
        cout<<s<<endl;
    }
    return 0;
}