#include<iostream>
using namespace std;

/*
Friend function with operator overloading:
in oper overloading when we use friend one explicit argument should be provided,

when binary operator is overloaded 2 explicit args must be provided.

*/
class friendOverLoading2;
class friendOverLoading{

        int money1;
        public:
            void geta()
            {
                cout<<"Enter friend1's money"<<endl;
                cin>>money1;
            }
            friend void operator > (friendOverLoading,friendOverLoading2);
};

class friendOverLoading2{
    int money2;
    public:
        void getb()
        {
            cout<<"Enter friend2's money"<<endl;
            cin>>money2;
        } 

        friend void operator > (friendOverLoading,friendOverLoading2);
};

void operator>(friendOverLoading f1, friendOverLoading2 f2)
{
    f1.money1 >f2.money2?cout<<"friend 1 has more money" : cout<<"friend 2 has more money";
}

int main()
{
    friendOverLoading friend1;
    friendOverLoading2 friend2;


    friend1.geta();
    friend2.getb();

    friend1>friend2;
}
