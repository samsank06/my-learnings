//Derived class object size sum of derived class members size+size of parent class
//Inheritance provides reusability and extensibility features
//If an empty class is declared then automatically its size become 1 byte

/*
5 levels of inheritance

1) single level
2)multi level
3)multiple
4) hybrid
5) hirarchial

*/


#include<iostream>
using namespace std;

class grandfather{
    protected:
            int gage,fage,sage;
            char gname[20],fname[20],sname[20];
    public:
        void getgrandpadata()
        {
            cout<<"Enter grandfather name and age"<<endl;
            cin>>gname>>gage;
        }
        void grandDisplay()
        {
            cout<<"The  name is "<<gname<<endl;
            cout<<"his age is :"<<gage<<endl;
        }
};

class father: public grandfather{
    public:
        void getfatherdata()
        {
            cout<<"Enter father name and age"<<endl;
            cin>>fname>>fage;
        }
        void fatherDisplay()
        {
            cout<<"The  name is "<<fname<<endl;
            cout<<"his age is :"<<fage<<endl;
        }
};

class son: public father{

        public:
        void getsondata()
        {
            cout<<"Enter son name and age"<<endl;
            cin>>sname>>sage;
        }
        void sonDisplay()
        {
            cout<<"The  name is "<<sname<<endl;
            cout<<"his age is :"<<sage<<endl;
        }
};

int main()
{
    son sammed;
    sammed.getgrandpadata();
    sammed.getfatherdata();
    sammed.getsondata();
    sammed.grandDisplay();
    sammed.fatherDisplay();
    sammed.sonDisplay();

    return 0;
}
