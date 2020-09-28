#include<iostream>
using namespace std;

class Test2;  // forward declaration (if not declared gives error saying Test 2 not declared)

class Test1{
    private: 
        int a; 
    public:
       void initilize()
       {
           cout<<"Enter value of a"<<endl;
           cin>>a;
       }
        friend void biggest(Test1,Test2); 
};

class Test2{
    private: 
        int b;
    public:
        void initilize()
        {
           cout<<"Enter value of b"<<endl;
           cin>>b;
        }
        friend void biggest(Test1,Test2);  
};

void biggest(Test1 t1, Test2 t2)
{
    if(t1.a>t2.b)
    {
        cout<<"a is biggest"<<endl;
    }
    else if(t1.a<t2.b)
    {
        cout<<"b is biggest"<<endl;
    }
    else
    {
        cout<<"Both are equal"<<endl;
    }
    
}

int main()
{
    Test1 T1;
    T1.initilize();
    Test2 T2;
    T2.initilize();

    biggest(T1,T2);
}