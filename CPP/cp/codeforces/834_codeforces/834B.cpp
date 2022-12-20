#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        vector <int> arr(m,0);
        bool flag=true;
        for(int i=0;i<m;i++)
            cin>>arr[i];
        int total = accumulate(arr.begin(),arr.end(),0);
        float key = (sqrt(8*(total+s) +1)-1)/2;
        if(key != (int)key)
            flag=false;
        else
        {
            int n = (int)key;
            for(int i:arr){
                if(i>n)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}