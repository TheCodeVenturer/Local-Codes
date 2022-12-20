#include<iostream>
using namespace std;
int main()
{
    int choice,a,c1,c2,c3,price,pay,am;
    cout<<"==Welcome to amusement park==\nPress 1 to enter total no.of members\n Press 0 if You are not interested\n\nEnter Choice:-";
    cin>>choice;
    if (choice==1)
    {
        cout<<"\nEnter total no.of members:-";
        cin>>a;
        cout<<"=========:MENU:============\n 1.Price for child age(0-15) is Rs 10\n 2.Price for Adult(16-55) is Rs 25\n3.Price for Old(55+) is Rs 15";
        cout<<"\nEnter total child:-";
        cin>>c1;
        cout<<"\nEnter total adult:-";
        cin>>c2;
        cout<<"\nEnter total old:-";
        cin>>c3;
        if ((c1>=0)&&(c2>=0)&&(c3>=0))
        {
            if(c1+c2+c3==a)
            {
                price=c1*10+c2*25+c3*15;
                cout<<"Total price "<<price;
                cout<<"\nHow do You wantto pay\nPress 1 for online\nPress 2 for cash\nEnterchoice:-";
                cin>>pay;
                if (pay==1)
                    cout<<"ThankYou For your convenience!\nGo and play\nAfter playing visit again";
                else if (pay==2)
                {
                    cout<<"Enter paying money:-";
                    cin>>am;
                    if (am==price)
                        cout<<"ThankYou For your convenience!\nGo and play\nAfter playing visit again";
                    else if (am>price)
                    {
                        cout<<"you will get "<<am-price;
                    }
                    else
                    {
                        cout<<"please pay "<<price-am<<" more";
                    }
                }
            }
            else if (c1+c2+c3 > a)
                cout<<"Total maximum members "<<a-(c1+c2+c3)<<"Sorry you are out";
            else
                cout<<"You had to add more member "<<(c1+c2+c3)-a<<"Sorry you are out";
        }
    }
}
