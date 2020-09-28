#include<iostream>
using namespace std;

template<class t>
class cricket{
    t odi,test,t20;
    public:
        void setdata()
        {
            cin>>test>>odi>>t20;
        }

        t total();
};

template<class t>
t cricket<t>::total()
{
    return odi+test+t20;
}

int main()
{
    cricket <int> c1;
    cout<<"Enter test,odi,t20 runs"<<endl;
    c1.setdata();
    int total=c1.total();
    cout<<"total runs scored = "<<total<<endl;
}