#include<iostream>
using namespace std;
class Employee
{
private:
    int EmployeeId;
    int Employeesal=100;
public:
   void setData(void);
   void getData(void);
};

void Employee :: setData(void){
    cout<<"Enter the Id of employee"<<endl;
    cin>>EmployeeId;
}
void Employee :: getData(void){
    cout<<"The Id of the employee "<<EmployeeId<<endl;
}

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setData();
        fb[i].getData();
    }
    
    
 return 0;
}