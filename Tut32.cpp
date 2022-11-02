#include<iostream>
using namespace std;
class Complex
{
private:
  int a;
  int b;
  int c;
public:
    Complex(int x=4, int y=3, int z=4){
        a = x;
        b = y;
        c = z;
    }
  void diplay(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;

  }
};



int main()
{
   Complex p(1, 4);
   p.diplay();
 return 0;
}