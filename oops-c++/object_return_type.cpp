#include<iostream>
using namespace std;

class obj_return{
    private:
        int a,b;
    public:
        void set_data()
        {
            cout<<"Enter a and b"<<endl;
            cin>>a>>b;
        }

        void show_data();
        

        obj_return sum(obj_return obj2);
        // {
        //     obj_return obj3;
        //     obj3.a=a+obj2.a;
        //     obj3.b=b+obj2.b;

        //     return obj3;

        // }
};

 obj_return  obj_return::sum(obj_return obj2)
        {
            obj_return obj3;
            obj3.a=a+obj2.a;
            obj3.b=b+obj2.b;

            return obj3;

        }

void obj_return ::show_data()
{
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;       
}

int main()
{

    obj_return obj1,obj2,obj3;
    obj1.set_data();
    obj2.set_data();

    obj3=obj1.sum(obj2);

    cout<<"obj1 data"<<endl;
    obj1.show_data();

    cout<<"obj2 data"<<endl;
    obj2.show_data();

    cout<<"The obj3 now is sum of obj1 and obj2"<<endl;
    obj3.show_data();

}