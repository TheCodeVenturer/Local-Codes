#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for(a=3;a>0;a--)
    {
        for(b=a;b>0;b--)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
