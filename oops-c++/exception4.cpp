#include<iostream>
using namespace std;

int main()
{
    try{
        cout<<"first try block"<<endl;
            
        try{
            cout<<"second try block"<<endl;
            throw 100;
        }
        catch(int x)
        {
            cout<<"inner catch block"<<endl;
            throw x;
        }
    }

    catch(int y)
    {
        cout<<"outer try block"<<endl;
        cout<<y<<" "<<" was thrown by inner try and catched in outer catch block"<<endl;
    }
}