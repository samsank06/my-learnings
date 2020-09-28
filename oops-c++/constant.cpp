#include<iostream>
using namespace std;

class simpleInterst{

    float p;
    int time;
    const float r;    
    /*
    Here comes the problem const members should be initilized while declaring but class wont allow
    it to declare
    Hence the rule is all const data members of a class are initialized with constructor
    */

   public:
        simpleInterst():r(2.5)
        {
            /*This is a procedure to initilize a const members*/
        }  

        void read(float p, int ti)
        {
            this->p=p;
            cout<<"p= "<<p<<endl;
            time=ti;
        }

        void show()
        {
            cout<<"The simple interest is: "<<(p*time*r)/100<<endl;
        }
};

int main()
{
    simpleInterst s1;
    s1.read(10,10);
    s1.show();
}
