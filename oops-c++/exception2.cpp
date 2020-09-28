#include<iostream>
using namespace std;

/* Here comes the problem  when int is throw one catch block, char is thrown 
 another catch block and so on. 

 solution is declare catch block with 3 dots.

like catch(...)
*/
int main()
{
    int a,b;
    try
    {
        cout<<"A and B "<<endl;
        cin>>a>>b;
        
        if(b==0) throw 0;
    }
    catch(...)
    {
        cout<<"Not possible"<<endl;
    }
    

}