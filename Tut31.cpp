#include<iostream>
using namespace std;
class Complex
{
private:
  int a;
   int b;

public:
    Complex(int x, int y){
         a = x;
         b = y;
    }
        Complex(int x){
         a = x;
         b = 0;
    }
    Complex(){
         a = 0;
         b = 0;
    }
  void diplay(){
    cout<<"The Complex number is: "<<a<<" + "<<b<<"i"<<endl;
  }
};



int main()
{
   Complex p(2, 3);
   Complex q(3);
   Complex r;
   p.diplay();
   q.diplay();
   r.diplay();

 return 0;
}