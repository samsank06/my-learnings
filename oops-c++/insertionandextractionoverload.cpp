#include<iostream>
using namespace std;

// << associated with  cout is insertion operator
// >> associated with cin is extraction operator

// insertion and Extraction operators require 2 classes hence go for friend function

class insertion{

    int id;
    char name[20];
    public:
        friend void operator >>(istream &in, insertion &ins)
        {
            //In general friend function should be defined outside the class
            // but in operator overloading it may be inside or outside
            cout<<"enter studen id,name"<<endl;
            in>>ins.id>>ins.name;
        }

        friend void operator <<(ostream &out, insertion &ot)
        {
        out<<"id= "<<ot.id<<" "<<"name= "<<ot.name<<endl;    
    }
};


int main()
{
    insertion ins;
    cin>>ins;
    cout<<ins;
}