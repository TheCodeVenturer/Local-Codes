#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=1;
    for(a=0;a<4;a++)
    {   for(c=a;c<4;c++)
            cout<<" ";
        for(b=0;b<d;b++)
            cout<<"* ";
        d++;
        cout<<"\n";
    }
    return 0;
}
