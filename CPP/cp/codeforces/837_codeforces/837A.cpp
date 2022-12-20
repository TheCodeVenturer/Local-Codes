#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int arr[size];
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            if(arr[i]>maxi)maxi=arr[i];
            if(arr[i]<mini)mini=arr[i];
        }
        int low=0;
        int up=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==mini)low++;
            if(arr[i]==maxi)up++;
        }
        if(mini==maxi) cout<<low*(low-1)<<endl;
        else cout<<low*up*2<<endl;
        
    }
    return 0;
}