#include<iostream>
using namespace std;

class Random{
    int a,b;

    public:
        //we have 2 types of member functions: 1) modifier 2) accesser

        void read()  // modifier as it modify the values of a and b 
        {
            a=10;
            b=20;
        }

        void show() const  // Accesser
        {
            //by writing const it is now a const memb func
            //const memb func can only access data(Hence they are called accessers) but it can't modify the data. 
            // a=30;
            // b=40;
            cout<<"a= "<<a<<" "<<"b= "<<b<<endl;
        }
};

int main()
{
    Random r;
    r.read();
    r.show();
}