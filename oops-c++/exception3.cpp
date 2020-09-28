/*
 this means whenever we have distructor in a class and objected is created inside a try block 
 then distructor is called before the program reaching the catch block

*/ 


#include<iostream>
using namespace std;

class exception1{

    public:
        exception1()
        {
            cout<<"constructor is called"<<endl;
        }
        ~exception1()
        {
            cout<<"Distructor is called"<<endl;
        }
};

int main()
{
    try
    {
        cout<<"Welcome to exception handling"<<endl;
        exception1 ex;
        throw 10;
    }

    catch(...)
    {
        cout<<"catch block working"<<endl;
    }
    
    
}