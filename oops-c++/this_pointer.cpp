#include<iostream>
using namespace std;

//every non static member have its local variable called this pointer.

class pointer{
    private: 
            int a,b;   
    public:
            void set(int a,int b)
            {
                // a=a;
                // b=b;
                this->a=a;
                (*this).b=b;
            } 

            void display()
            {
                cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
            }
};

int main()
{
    pointer test;
    test.set(10,20);
    test.display();
    return 0;
}