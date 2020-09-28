#include<iostream>
using namespace std;

class  constr{
    private:
            int a,b;
    public:
            constr()
            {
                a=30;
                b=40;
            }
            void display()
            {
                cout<<"a= "<<a<<endl<<"b="<<b<<endl;
            }
            ~constr()
            {
                cout<<"a= "<<a<<" "<<"b= "<<b<<endl;
            }
};

int main()
{
    constr con1;  //if n objects are created then constructor is called n times;
   // con1.display();


    return 0;
}