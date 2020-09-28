#include<iostream>
using namespace std;

/*
static member functions:
they are especially designed to work with static data members
they never work with non-static data members

1) they are not associated with this pointer(i.e, we cant call them using this pointer)
2)they cant be constant , virtual or volatile
*/

class static_function{   
    public:
    static void read(int x, int y)
    {
        if(x>y)
            cout<<"x greater than y"<<endl;
        else
            cout<<"y greater that x"<<endl;        
    }
};

int main()
{
    cout<<"Accessing static memb func through object"<<endl;
    static_function s1;
    s1.read(10,4);

    cout<<"Accessing static memb func through object"<<endl;
    static_function::read(20,35);          // if read was  non static member then it should not be called with class name (gives error)
                                        //but static member can be called with both class name and object name.
}