#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long long sum=0;
        vector<long long> t1(n,0);
        vector<long long> t2(n,0);
        for(int i=0;i<n;i++)
        {
            long long temp;
            cin>>temp;
            t1[i]=temp;
            if(temp==0)
            {
                t2[i]=(-1)*sum;
                sum=0;
            }
            else{
                sum+=temp;
                t2[i]=temp;
            }
        }
        sum=0;
        int t=0;
        for(int i=0;i<n;i++)
        {
            sum+=t2[i];
            if(sum==0)
            t++;
        }
        cout<<t<<endl;
    }
}