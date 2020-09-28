#include<iostream>
using namespace std;

class Linux{
    private:
            
    public:
        void display()
        {
          cout<<"The first class program on linux operating system"<<endl;
        }
        void size();
};

void Linux::size()
{
    cout<<"The function definition outside a class"<<endl;
}

int main()
{
    Linux ubuntu;
    ubuntu.display();
    ubuntu.size();


    
    return 0;
}