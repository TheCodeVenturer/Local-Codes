#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag=true;
        string s1;
        cin>>s1;
        char c = s1[0];
        for(int i=1;i<s1.length();i++){
            if(c=='Y' && s1[i]=='e')
                c=s1[i];
            else if(c=='e' && s1[i]=='s')
                c=s1[i];
            else if(c=='s' && s1[i]=='Y')
                c=s1[i];
            else
            {
                flag=false;
                break;
            }
        }
        if(flag && (c=='Y' || c=='e' || c=='s'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}