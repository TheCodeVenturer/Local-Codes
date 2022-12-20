#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,avg;
    cout<<"Enter no.of natural no.s you need:-";
    cin>>a;
    for(b=1;b<=a;b++)
    {
        cout<<b<<" ";
        c+=b;
    }
    cout<<"\nTotal sum is"<<c;
    cout<<"\nAverage of first "<<a<<" natural no.s is "<<(float)c/(float)a;
}
