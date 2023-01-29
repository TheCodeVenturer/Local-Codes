#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
/*
    Exponent By Squaring
    In mathematics and computer programming, exponentiating by squaring is a general method for fast computation of large positive integer powers of a number, or more generally.
    Time Complexity : O(logn)

*/
ll fast_pow(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2==1)
        return (a*fast_pow(a, b-1))%mod;
    long long tmp_exp = (fast_pow(a, b/2))%mod;
    return (tmp_exp * tmp_exp)%mod;
}
int main()
{
    int base,exp;
    cout<<"Enter Base And Exponent:";
    cin>>base>>exp;
    cout<<"Power("<<base<<","<<exp<<") is"<<fast_pow(base,exp);
    return 0;
}