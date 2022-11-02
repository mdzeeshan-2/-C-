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
   friend Complex setDataSum(Complex o1, Complex o2);
   void getData(){
    cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
   }
};
Complex setDataSum(Complex o1, Complex o2){
     Complex o3;
     o3.setData(( o1.a + o2.a), (o1.b + o2.b));
     return o3;
   }
int main()
{
  Complex zeeshan, anuj, punkit;
  zeeshan.setData(2, 4);
  zeeshan.getData();

  anuj.setData(4, 8);
  anuj.getData();

  punkit = setDataSum(zeeshan, anuj);
  punkit.getData();
     
 return 0;
}