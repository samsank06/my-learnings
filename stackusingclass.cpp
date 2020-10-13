#include<iostream>
#include<string>
using namespace std;

class stack{
    private:
        int top,num,max,len, temp;
        int arr[5];
    public:
        stack()
        {
            top=-1;
            num=0;
            len=0;
            max=5;
        }

        void push()
        {
            if(top==max)
                cout<<"stack is full"<<"top="<<top<<endl;
            else{
                cout<<"Enter an element to push"<<endl;
                cin>>num;
                top++;
                arr[top]=num;
            }

        }

        void pop()
        {
            if(top==-1)
                cout<<"The stack is empty"<<endl;
            else
            {
                arr[top]=0;
                top--;
            }
            
        }

        void topOfStack()
        {
            if(top==-1)
               cout<<"The stack is empty"<<endl;
            else{
                cout<<"The top element is = "<<top<<endl;
            }

        }

        void empty()
        {
            if(top==-1)
               cout<<"The stack is empty"<<endl;
            else
               cout<<"The stack is not empty"<<endl;

        }

        void size()
        {
            temp=top;
            if(temp==-1)
                cout<<"The size = "<<0<<endl;
            else
            {
                while(temp!=0)
                {
                    len++;
                    temp--;

                }
                cout<<"size = "<<len+1<<endl;
                
            }
            
        }

        void swap()
        {

        }

        void display()
        {
            if(top==-1)
                cout<<"empty stack"<<endl;
            else{
                temp=top;
                while(temp!=0)
                {
                    cout<<top<<" ";
                    
                }
            }
        }
};

int main()
{
    stack st;
    while(1)
    {
        int choice=0;
        cout<<"stack operations"<<endl;
        cout<<"1.push\t 2.pop\t 3.top\t 4.empty\t 5.size\t 6.swap\t 7.display\t 8.exit\n"<<endl;
        cout<<"Enter your option"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: st.push();
                    break;
            case 2: st.pop();
                    break;
            case 3: st.topOfStack();
                    break;
            case 4: st.empty();
                    break;
            case 5: st.size();
                    break;
            case 6: st.swap();
                    break;
            case 7: st.display();
                    break;
            case 8: exit(1);
                    break;
            case 9: system("cls");
                    break;
        }
    }

    return 0;
}