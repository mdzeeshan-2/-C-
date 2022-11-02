#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
    static int count; 
public:
   void setData(void);
   void getData(void);
};

void Employee :: setData(void)
{
    cout<<"Enter the Id: "<<endl;
    cin>>id;
    count ++;
}

void Employee :: getData(void)
{
    cout<<"The id of this employee is "<<id<<" This is emoloyee number "<<count<<endl;
}
int Employee  :: count;     //Default count is 0i
int main()
{
   Employee zeeshan, anuj, farhan;
   zeeshan.setData();
   zeeshan.getData();
   anuj.setData();
   anuj.getData();  
 return 0;
}