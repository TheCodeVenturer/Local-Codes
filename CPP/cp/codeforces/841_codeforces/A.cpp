#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long sum=1;
        int size;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            sum*=temp;
        }
        cout<<(sum+(size-1)*1)*2022<<endl;
    }
    return 0;
}