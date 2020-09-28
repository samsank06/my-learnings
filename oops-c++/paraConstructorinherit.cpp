
//rules for parametarized constructors:
/*
    1>whenever base class is having parameterised constructor we should have to declare a default constructor without any name.
    2>base class parameterised constructor should be invoked inside parameterised constructor of derived class
    3>base class parameterised constructor should be the first statement in derived class parameterized constructor
    4> no other base class constructors are called within derived class parameterized constructor

*/

#include<iostream>
#include<string.h>
using namespace std;

class student{
    int sid ;
    char name[20];
    public:
        student()
        {

        }
        student(int sid, char name[20])
        {
            this->sid=sid;
            strcpy(this->name,name);
        }

        void showStudent()
        {
            cout<<"name= "<<name<<endl;
            cout<<"sid= "<<sid<<endl;
        }
        
};

class marks: public student{
    int p,c,m,s;
    public:
        marks(int sid, char name[20], int p,int c,int m)
        {
            student::student(sid,name);
            this->p=p;
            this->c=c;
            this->m=m;
        }

        void showMarks()
        {
            cout<<"m= "<<m<<"c= "<<c<<"m= "<<m<<endl;
        }

};

int main()
{
    marks mar(1,'sammed',96,95,99);
    mar.showStudent();

    return 0;
}