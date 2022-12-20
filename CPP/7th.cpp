#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter year:-";
    cin>>a;
    if (a%400==0 || (a%4==0 && a%100!=0))
        cout<<"Leap Year";
    else
        cout<<"Not leap Year";
}
