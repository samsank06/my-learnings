#include<iostream>
using namespace std;

class  CopyConstr{
    private:
            int a,b;
    public:
        CopyConstr(int a, int b)  //parametarized 
        {
            this->a=a;
            this->b=b;
        }   
        CopyConstr(CopyConstr &obj) // copy
        {
            a=obj.a;
            b=obj.b;
        }

        void show_data()
        {
            cout<<"a= "<<a<<" "<<"b= "<<b<<endl;
        }
};       

int main()
{
    CopyConstr copy1(10,15);
    copy1.show_data();
    CopyConstr copy2(copy1);
    copy2.show_data();

    return 0;

}