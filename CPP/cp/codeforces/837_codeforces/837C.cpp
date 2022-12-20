#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,bool> m1;
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        bool flag=false;
        for(int i=0;i<size;i++){
            if(arr[i]!=1){
                if(m1[arr[i]])
                {
                    flag=true;
                    break;
                }
                m1[arr[i]]=true;
            }
            for(int j=2;j<=sqrt(arr[i]);j++)
            {
                if(arr[i]%j==0)
                {
                    if(m1[j])
                    {
                        flag=true;
                        break;
                    }
                    m1[j]=true;
                    int k=arr[i]/j;
                    if(k==j)break;
                    if(m1[k])
                    {
                        flag=true;
                        break;
                    }
                    m1[k]=true;
                }
            }
            if(flag)
                break;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}