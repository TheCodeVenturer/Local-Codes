#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vector<int> alphabets(26);
        for(int j=0;j<26;j++){
            int val;
            cin>>val;
            alphabets[j]=val;
        }
        for(auto j:alphabets)
            cout<<j<<" ";
        cout<<endl;
        int rounds;
        cin>>rounds;
        unordered_set<string> strings;
        bool flag=false;
        while(rounds--){
            string s;
            cin>>s;
            for(auto &j:s){
                j = (char)(alphabets[j-'A']);
            }
            cout<<s<<endl;
            if(strings.count(s)==0)
                strings.insert(s);
            else{
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"Case #"<<i<<": YES\n";
        else
            cout<<"Case #"<<i<<": NO\n";
        strings.clear();
    }
    return 0;
}