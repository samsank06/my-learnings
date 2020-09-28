//virtual classes

/*
     class-A
        /\     
       /  \
      /    \
     /      \
 class-B  class-C  class  A properties are passed to both B and C classes
    \       /
     \     /
      \   /
       \ /
     class-D    here comes the problem 

    i.e, class D now have properties of class A twice (i.e, once from class B and from class C)
    this is not allowed in inheritance.
            
solution :

         class-A
            /\     
           /  \
          /    \
         /      \
      class-B  class-C   make B and C as virtual as -> class B: public virtual A
        \       /                                      class c: public virtual A
         \     /
          \   /
           \ /
         class-D    


*/

#include<iostream>
using namespace std;

class A{
    public:
        A()
        {
            cout<<"A is called"<<endl;
        }
};

class B:public A{
    public:
        B()
        {
            cout<<"B is called"<<endl;
        }
};

class C:public A{
    public:
      C()
        {
            cout<<"C is called"<<endl;
        }
};

class D: public B, public C{
    public:
      D()
        {
            cout<<"D is called"<<endl;
        }
};

int main()
{
    D obj;
}