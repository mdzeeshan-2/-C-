#include<iostream>
using namespace std;
class Number
{
private:
   int a;
public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    Number(Number &obj){
         cout<<"Copy constructor invoked"<<endl;
        a = obj.a;
    }
    void diplay(){
        cout<<"The Value of a is: "<<a<<endl;
    }
};


int main()
{
    Number x, y(34), z(74), z2;
    x.diplay();  
    y.diplay();  
    z.diplay(); 
    Number y1(y);           //copy constructor invoked
    y1.diplay();    
    z2 = z;                     //copy constructor not called
    z2.diplay();
    Number z3 = z;              //copy constructor invoked
    z3.diplay();
 return 0;
}