#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=0;a<4;a++)
    {   for(c=a;c<3;c++)
            cout<<" ";
        for(b=0;b<=a;b++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
