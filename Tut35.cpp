#include<iostream>
using namespace std;
int count;
class num
{

public:
    num(){
        count++;
        cout<<"Here CONSTRUCTOR called for an object number: "<<count<<endl;
    };
    ~num(){
        count--;
        cout<<"Here DESTRUCTOR called for an object number: "<<count<<endl;
    };
};


int main()
{
     cout<<"We are inside of our main function"<<endl;
     
     cout<<"Creating first object n1"<<endl;
     
     num n1;
     {
        cout<<"Entering the block of first object"<<endl;
        
        cout<<"Now again creating two more object"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
     }
     cout<<"Back to main function"<<endl;

return 0;
}