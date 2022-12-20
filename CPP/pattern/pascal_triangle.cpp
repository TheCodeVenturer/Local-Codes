# include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,k,l,p,r,pr,comb;
    cout<<"Enter total lines to print:";
    cin>>a;
    if (14>a>0)
    {
        k=0;
        for(b=0; b<a; b++)
        {
            for(c=k; c<a; c++)
            {
                cout<<"   ";
            }
            k+=1;
            p=1;
            for(l=b; l>1; l--)
                p*=l;
            for(d=0; d<=b; d++)
            {
                r=1;
                pr=1;
                for(l=(b-d); l>1; l--)
                    r*=l;
                for(l=d; l>1; l--)
                    pr*=l;
                comb=p/(pr*r);
                if (comb<10)
                    cout<<comb<<"     ";
                else if (comb<100)
                    cout<<comb<<"    ";
                else if (comb<1000)
                    cout<<comb<<"   ";
                else
                    cout<<comb<<"  ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
