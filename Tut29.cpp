#include<iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    Complex(void);
    void getData(){
    cout<<"The complex Number is: "<<a<<" + " <<b<<"i"<<endl;
   }
};

Complex::Complex(void)
{
     a = 10;
     b = 20;
}


int main()
{
  Complex c1;
  c1.getData();
 return 0;
}