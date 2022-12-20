#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    if (n==1)
    {
        cout<<"Enter side of triangles:";
        cin>>a>>b>>c;
        if ((a+b>c)&&(b+c>a)&&(c+a>a))
            cout<<"Triangle is possible";
        else
            cout<<"Triangle is not possible";
    }
    else
    {
        cout<<"enter no.";
        cin>>a;
        if (a%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }
    return 0;
}
