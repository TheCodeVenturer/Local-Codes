#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int arr[k];
        int count=1;
        int pos=1;
        arr[0]=1;
        while(pos<k){
            if(k-pos-1 <= n-arr[pos-1]-count){
                arr[pos]=arr[pos-1]+count;
                pos++;
                count++;
            }
            else
                break;
        }
        while(pos<k){
            arr[pos]=arr[pos-1]+1;
            pos++;
        }
        for(int i:arr)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}