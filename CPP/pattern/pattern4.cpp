#include<iostream>
using namespace std;
int main()
{
    int a,c;
    for(a=0;a<5;a++)
    {
        for(c=0;c<5;c++)
        {
            if (a==0 || a==4 || c==0 || c==4)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
