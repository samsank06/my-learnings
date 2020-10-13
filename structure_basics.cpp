#include<iostream>
using namespace std;

struct Node1{
    int val;
    double doubl;
    char ch;    
};

struct Node2{
    Node2(int v, double d,char c)
    {
        val =v;
        doubl=d;
        ch= c;
    }
    int val;
    double doubl;
    char ch;    
};

struct Node3{
    Node3(int v, double d, char c): val(v), doubl(d),ch(c)
    {

    }
    int val;
    double doubl;
    char ch;    
};

struct Node4{
    Node4(): val(40), doubl(40.45),ch('m')
    {

    }
    int val;
    double doubl;
    char ch;    
};

int main()
{

struct Node1 node1;
//Initialization of structure members.
node1.val=10;
node1.doubl=(20.34);
node1.ch='s';
cout<<"node1 contains"<<endl;
cout<<node1.val<<" "<<node1.doubl<<" "<<node1.ch<<endl;

struct Node2 node2(20,30.23,'p');
cout<<"node2 contains"<<endl;
cout<<node2.val<<" "<<node2.doubl<<" "<<node2.ch<<endl;

struct Node3 node3(30,40.23,'t');
cout<<"node3 contains"<<endl;
cout<<node3.val<<" "<<node3.doubl<<" "<<node3.ch<<endl;

struct Node4 node4;
cout<<"node4 contains"<<endl;
cout<<node4.val<<" "<<node4.doubl<<" "<<node4.ch<<endl;

}