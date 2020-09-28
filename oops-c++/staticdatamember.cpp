#include<iostream>
using namespace std;

/*
whenever it is required to share one data member to all object then static
declaration is used.
They are declared inside a class and defined outside a class 

static data members are created in data segment which is a public area  thats why any object can access it.
*/

class static_member{

    private: 
        static int a;  //declared
        static int b; //when declared as static it becomes class member not object member 
    public:
        void set_b()
        {
            //b=20;
            cout<<"b= "<<b<<endl;
        }
};

int static_member::b=29; //defined

int main()
{
    static_member s1,s2,s3;
    s1.set_b();
    s2.set_b();
    s3.set_b();
    

    return 0;
}