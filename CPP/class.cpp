#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
        int roll;
        string name;
        int marks1,marks2,marks3;
    public:
        Student(int roll,string name,int m1, int m2, int m3)
        {
            this->roll=roll;
            this->name=name;
            marks1=m1;
            marks2=m2;
            marks3=m3;
        }
        int total()
        {
            return (marks1+marks2+marks3);
        }
        char grade()
        {
            int score=total();
            float percentage=score/3;
            if(percentage>=90)
                return 'A';
            else if(percentage>=80)
                return 'B';
            else if(percentage>=70)
                return 'C';
            else if(percentage>=60)
                return 'D';
            else if(percentage>=50)
                return 'E';
        }
};

int main()
{
 int roll;
 string name;
 int m,p,c;
 cout<<"Enter Roll number of a Student: ";
 cin>>roll;
 cout<<"Enter Name of a Student:";
 cin>>name;
 cout<<"Enter marks in 3 subjects";
 cin>>m>>p>>c;
 Student s(roll,name,m,p,c);
 cout<<"Total Marks:"<<s.total()<<endl;
 cout<<"Grade of Student:"<<s.grade()<<endl;
}