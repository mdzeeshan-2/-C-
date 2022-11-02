#include<iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
   void setData(int v1, int v2){
    a = v1;
    b = v2;
   }
   void setDataSum(Complex o1, Complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
   }
   void getData(){
    cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
   }
};

int main()
{
  Complex zeeshan, anuj, punkit;
  zeeshan.setData(2, 4);
  zeeshan.getData();

  anuj.setData(5, 8);
  anuj.getData();

  punkit.setDataSum(zeeshan, anuj);
  punkit.getData();

     
 return 0;
}