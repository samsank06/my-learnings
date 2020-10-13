#include<iostream>
#include<stack>
using namespace std;

stack<int> st;

void push()
{
    int num;
    cout<<"Enter the element to push"<<endl;
    cin>>num;
    st.push(num);
}

void pop()
{
    if(st.empty())
        cout<<"The stack is empty"<<endl;
}

void top()
{
    if(st.empty())
        cout<<"The stack is empty"<<endl;
    else
        cout<<"top element = "<<st.top()<<endl<<endl;
}

void empty()
{
    if(st.empty())
        cout<<"The stack is empty"<<endl;
    else
        cout<<"The stack is not empty"<<endl;
}

void size()
{
    cout<<"the size of stack is ="<<st.size()<<endl<<endl;
}

void swap()
{
 stack<int> local;
 local.swap(st);
 cout<<"st was copied into local"<<endl<<endl;
}

void display()
{
    if(st.empty())
        cout<<"The stack is empty"<<endl;
    else
        {
            while(!st.empty())
            {
                cout<<st.top()<<" "<<endl;
                st.pop();
            }
        }
}

int main()
{
while(1)
{
    int choice=0;
    cout<<"stack operations"<<endl;
    cout<<"1.push\t 2.pop\t 3.top\t 4.empty\t 5.size\t 6.swap\t 7.display\t 8.exit\n"<<endl;
    cout<<"Enter your option"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: top();
                break;
        case 4: empty();
                break;
        case 5: size();
                break;
        case 6: swap();
                break;
        case 7: display();
                break;
        case 8: exit(1);
                break;
    }
}
}
