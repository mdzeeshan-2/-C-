#include<iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    Complex(int, int);
   void getData(){
    cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
   }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex c(12, 35);                  //Implicit Call
    Complex g = Complex(23, 34);        //Emplicit Call
    c.getData();
    g.getData();

 return 0;
}