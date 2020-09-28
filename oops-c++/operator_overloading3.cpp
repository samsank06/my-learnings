#include<iostream>
using namespace std;

//when binary operator is overloaded one object is passed explicitly
// but when unary operator(--,++) are overloaded no need of passing any object explicitly

class operator_over{
    int a;
    public:
        operator_over()
        {
            a=0;
        }

        void display()
        {
            cout<<"a= "<<a<<endl;
        }

        void operator ++()
        {
            a++;
        }

        void operator --();

};

void operator_over::operator--()
{
    a--;
}

int main()
{
    operator_over ov1;
    ov1.display();
    ++ov1;
    cout<<"After (++) is overloaded"<<endl;
    ov1.display();
    --ov1;
    cout<<"after (--) is overloaded"<<endl;
    ov1.display();



}