#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        string s1;
        cin>>s1;
        int maxi=0;
        int arr[10]={0};
        for(int i=0;i<s1.length();i++){
            int k=(int)i - 48;
            arr[k]++;
            if(maxi<arr[k])
                maxi=arr[k];
        }
        int dist=0;
        for(int i=0;i<10;i++)
        {
            if(arr[i]!=0)
                dist++;
        }
        
    }
}