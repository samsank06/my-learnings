#include<iostream>
using namespace std;

/*
friend func is a non-member function of a class and hence invoked like a normal functions
(not like object_name.function_name() )
they can access private data of a class.
they are against the cpp rule of data hiding
they can be declared anywhere(private/public/protected)
friend function should be declared inside a function with friend keyword.
definition is conducted outside the class and without friend keyword.
friend functions have objects as agruments.

majorly used in operator overloading concept
*/


class Nature{
    private: 
        int a,b;
        friend void display(Nature);
    public:
        void display1();
};

void display(Nature N)
{
    N.a=10;
    N.b=20;
    cout<<"a= "<<N.a<<" "<<"b= "<<N.b<<endl;
}

void Nature::display1()
{
    a=12;
    b=21;
    cout<<"a= "<<a<<" "<<"b= "<<b<<endl;

}

int main()
{

    Nature n;
    cout<<"Friend function"<<endl;
    display(n);
    cout<<"member function"<<endl;
    n.display1();
    
}