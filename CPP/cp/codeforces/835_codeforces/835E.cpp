#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int length;
        cin>>length;
        long long arr[length],ones=0,sol=0;
        for(int i=0;i<length;i++)
            cin>>arr[i];
        for(auto i:arr)
        {
            if(i==0)
                sol+=ones;
            else
                ones++;
        }
        //for first zero flip
        int zeroIndex=-1;
        for(int i=0;i<length;i++)
            if(arr[i]==0){
                zeroIndex=i;
                break;
            }
        ones =0;
        if(zeroIndex!=-1){
            arr[zeroIndex]=1;
            long long sol2=0;
            for(auto i:arr)
            {
                if(i==0)
                    sol2+=ones;
                else
                    ones++;
            }
            sol=max(sol,sol2);
            arr[zeroIndex]=0;
        }
        //for last zero flip
        ones=0;
        int oneIndex=-1;
        for(int i=length-1;i>=0;i--)
            if(arr[i]==1){
                oneIndex=i;
                break;
            }
        if(oneIndex!=-1)
        {
            arr[oneIndex]=0;
            long long sol2=0;
            for(auto i:arr)
            {
                if(i==0)
                    sol2+=ones;
                else
                    ones++;
            }
            sol=max(sol,sol2);
        }
        cout<<sol<<endl;
    }
    return 0;
}