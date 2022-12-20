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
        int size;
        cin>>size;
        string str;
        cin>>str;
        char t=str[0];
        char prev=t;
        int value=0;
        if(t=='1')value=1;
        for(int i=1;i<str.size();i++){
            t=str[i];
            if(t=='0')
                cout<<'-';
            else{
                if(value>0){
                    cout<<'-';
                    value--;
                }
                else{
                    cout<<'+';
                    value++;
                }
            }
            
        }
        cout<<endl;
    }
    return 0;
}