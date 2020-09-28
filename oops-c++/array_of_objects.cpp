#include<iostream>
using namespace std;

/*Array of objects is used to to store no. of students data(for example) using only one array
    if arrayof obj is not then for each student we have to declare one object
*/

class ArrayOfObjects
{
    private:
            int studentId;
            char studentName[20];
    public:
            void EnterData();
            void ShowData();
};

void ArrayOfObjects::EnterData()
{
    cout<<"Enter student Id"<<endl;
    cin>>studentId;
    cout<<"Enter student Name"<<endl;
    cin>>studentName;
}

void ArrayOfObjects::ShowData()
{
    cout<<"The student Id = "<<studentId<<endl;
    cout<<"Student Name = "<<studentName<<endl;
}

int main()
{
    ArrayOfObjects student[60]; //static declaration of array 
    int n=0;
    cout<<"Enter the number of students"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
        student[i].EnterData();
    
    for(int i=0;i<n;i++)
        student[i].ShowData();

    return 0;
}