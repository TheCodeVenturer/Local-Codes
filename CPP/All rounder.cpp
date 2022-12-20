#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1.prime\n2.factorial\n3.total odd even in taken ten digits\n4.Sum of first n natural no.s\n5.prime no. in range";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        int a,i,c=0;
        cout<<"Enter a no.";
        cin>>a;
        if (a>1)
        {
            for(i=a/2; i>1,c==0; i--)
            {
                if (a%i==0)
                {
                    c=1;
                }
            }
            if (c==1)
                cout<<a<<" is Not Prime";
            else
                cout<<a<<" Prime";
        }
        else if(a==1)
            cout<<"1 is niether prime nor composite";
        else
            cout<<"you have entered a negative no.";
        break;
    }
    case 2:
    {
        int a,i,f=1;
        cout<<"Enter a no.";
        cin>>a;
        if (a>=0)
        {
            for(i=a; i>1; i--)
                f*=i;
            cout<<"factorial of "<<a<<" is "<<f;
        }
        break;
    }
    case 3:
    {
        int a,i,o=0,e=0;
        for(i=1; i<11; i++)
        {
            cout<<"Enter a no.";
            cin>>a;
            if(a%2==0)
                e+=1;
            else
                o+=1;
        }
        cout<<"Total of odd is "<<o<<"\nTotal of even is "<<e;
        break;
    }
    case 4:
    {
        int a,b,c=0,avg;
        cout<<"Enter no.of natural no.s you need:-";
        cin>>a;
        for(b=1; b<=a; b++)
        {
            cout<<b<<" ";
            c+=b;
        }
        cout<<"\nTotal sum is"<<c;
        cout<<"\nAverage of first "<<a<<" natural no.s is "<<(float)c/(float)a;
        break;
    }
    case 5:
    {
        int a,b,i,j,c,k=0;
        cout<<"Enter lower limit upper limit:-";
        cin>>a>>b;
        for(i=a; i<=b; i++)
        {
            c=0;
            if (i>1)
            {
                for(j=i-1; j>1; j--)
                {
                    if (i%j==0)
                    {
                        c=1;
                        break;
                    }
                }
                if (c==0)
                {
                    cout<<i<<" ";
                    k=1;
                }
            }
        }
        if (k==1)
            cout<<"are prime";
        break;
    }
    default :
        cout<<"wrong choice";
    }
    return 0;
}
