#include<iostream>
using namespace std;

/*
operator is a special symbol designed to  perform a particular
operation on  pre defined data types;
we can perform addition(for ex) on two user defined data types;
i.e, object1+object2

we are using operator instead of function to do a particular task;
we cant create new operator using using Operator loading
and also we cant change basic functionality of a operator.

we are passing we are passing objects as arguments.

some operators are not overloaded are {::  .  .*  sizeof()  ?:}


syntax:
    [return_type] [class_name] :: operator operator_symbol(arguments_list)
    {

        return value;
    }

*/

class Operator{
        int a;
        public:
            void get()
            {
                cout<<"Enter a"<<endl;
                cin>>a;
            }
            
            //Overloading using normal- function.

            void compare(Operator t1)  //t1 is explicit
            {
                if(a==t1.a)
                    cout<<"the objects are equal"<<endl;
                else
                    cout<<"Objects are Not equal"<<endl;
            }
            
            //overloading using operator

            void operator ==(Operator op2)
            {
                if(a==op2.a)
                    cout<<"The objects are equal"<<endl;
                else
                    cout<<"The objects are not equal"<<endl;            
            }    
};

int main()
{
    Operator op1,op2;

    op1.get();
    op2.get();

    op1.compare(op2);      // op1 is implicitly passed.

    cout<<"with the use of operator overloading :"<<endl;
    op1==op2;

}
