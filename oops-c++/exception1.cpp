// exception is error causing 
//upto turbo c++ 3.0exception handling is not provided.

// 1> try -> it contain error causing program
// 2> throw -> whenever that error occured we are going to throw  some value.
// 3> catch -> thrown value is catched here and solution is provided here.

// In DEV C++ dont enter .h in the end of header file for cpp header files like <iostream.h> 
//#include<conio.h> is for console i/p and o/p i.e, clrscr() and getch();

// DEV C++ won't support void main();

//c language dosen't support exception handling

#include<iostream>
using namespace std;

int main()
{
int a,b;
try
{
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    if(b==0) throw 0;
    cout<<"division = "<<a/b<<endl;

}
// catch block must be declared immediatly after try block.
catch(int x)
{
    cout<<"division not possible"<<endl;
}



}
