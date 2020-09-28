#include<iostream>
using namespace std;

class A{

    public:
    A()
    {
        cout<<"constructor of A"<<endl;
    }
    ~A()
    {
        cout<<"distructor of A"<<endl;
    }

};

class B: public A{

    public:
    B()
    {
        cout<<"constructor of B"<<endl;
    }
    ~B()
    {
        cout<<"distructor of B"<<endl;
    }
};

class C: public B{

    public:
    C()
    {
        cout<<"constructor of C"<<endl;
    }
    ~C()
    {
        cout<<"distructor of C"<<endl;
    }
};

//The constructor of base class is automatically bind with derived classes.


int main()
{
    C obj;

    return 0;
}
