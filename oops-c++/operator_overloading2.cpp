//adding 2 strings using +
#include<iostream>
#include<string.h>
using namespace std;

class string_add{
    char s[20];
    public:
        void read()
        {
            cout<<"Enter string"<<endl;
            cin>>s;
        }
        void show()
        {
            cout<<"String="<<s<<endl;
        }

        //overloading using a function
        string_add add(string_add str2)
        {
            string_add str3;
            strcpy(str3.s, s);
            strcat(str3.s," ");
            strcpy(str3.s,str2.s);
            return str3;
        }

        string_add operator+(string_add str2)
        {
            string_add str3;
            strcpy(str3.s, s);
            strcat(str3.s," ");
            strcpy(str3.s,str2.s);
            return str3;
        }
};

int main()
{

    string_add str1,str2,str3;
    str1.read();
    str2.read();
    str3=str1.add(str2);
    cout<<"now using overloading(+)"<<endl;    
    str3=str1+(str2);

    str3.show();
   
}