#include<iostream>
using namespace std;
int main()
{
    int a,b,rem,rev=0;
    cout<<"Enter no.";
    cin>>a;
    b=a;
    while (b>0)
    {
        rem = b%10;
        rev=rev*10+rem;
        b=b/10;
    }
    if(a==rev)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    }
