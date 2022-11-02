#include<iostream>
using namespace std;
class base
{
private:
   int a;
   protected:
   int b;
public:
    void dispay(){
    cout<<"C = 12"<<endl;
   }
};
 class Derived : protected base
 {
    
 };


int main()
{
    base g;
    g.dispay();
 return 0;
}