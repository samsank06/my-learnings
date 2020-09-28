#include<iostream>
using namespace std;

class stat_memb{
    static int count; //when a data member is static only one copy of it is created irrespective of no. of objects
    public:
        stat_memb()
        {   
            //count=0;       // every time count becomes 0 
            count++;
            cout<<count<<" "<<"Object Created"<<endl;
        }
        ~stat_memb()
        {
            cout<<count<<" "<<"Object Deleted"<<endl;
            count--;
        }
};

int stat_memb::count;
int main()
{
    stat_memb s1,s2,s3;
    return 0;
}