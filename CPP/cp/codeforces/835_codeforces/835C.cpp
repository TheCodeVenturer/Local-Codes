#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int length;
        cin>>length;
        int arr[length];
        int maxi=0,maxi2=-1;
        int index = -1;
        for(int i=0;i<length;i++){
            cin>>arr[i];
            if(arr[i]>maxi){
                maxi2=maxi;
                maxi=arr[i];
                index=i;
            }
            else if(arr[i]>maxi2)
                maxi2=arr[i];
        }
        for(int i=0;i<length;i++)
        {
            if(i!=index)
                cout<<arr[i]-maxi<<" ";
            else
                cout<<maxi-maxi2<<" ";
        }
        cout<<endl;
    }
    return 0;
}