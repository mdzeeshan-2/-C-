#include<iostream>
using namespace std;
class Employee
{

public:
   int id;
   float salary;
   Employee(int empid){
    id = 34;
    salary = 23.5;
   }
   Employee(){}
   };

class Programmer : public Employee
{
    public: 
        Programmer(int ind){
            id = ind;
        }
        int languagecode = 264;
        void getData(){
            cout<<id<<endl;
            cout<<salary<<endl;
        }
};

int main()
{
    Employee harry(12), carry(53);
    cout<<harry.salary<<endl;
    cout<<carry.salary<<endl;
    Programmer zeemshan(75);
    cout<<zeemshan.languagecode<<endl;
    cout<<zeemshan.salary<<endl;
    zeemshan.getData();

 return 0;
}