#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
            {
                if (a+b <3)
                {
                    cout<<"  ";}
                else
                    cout<<"* ";
            }
        if (a>0)
        {
            for(c=0;c<a;c++)
                cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
