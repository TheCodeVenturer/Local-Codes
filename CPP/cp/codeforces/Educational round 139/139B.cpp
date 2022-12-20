#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }
        unordered_map<string,int> m1;
        string j = "";
        j+=s[0];
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            j.push_back(s[i]);
            if(m1[j])
            {
                if(m1[j]!=i-1){
                cout<<"YES"<<endl;
                flag=true;
                break;
                }
            }
            else
                m1[j]=i;
            j.erase(0,1);
        }
        if(!flag)
        cout<<"NO"<<endl;
    }
    return 0;
}
