#include<iostream>
using namespace std;
class C2;
class C1
{
private:
   int val1;
public:
  void setData(int data){
    val1 = data;
  }  
    void diplay(){
        cout<<val1<<endl;
    }
    friend void swap(C1 &, C2 &);
};
class C2
{
private:
   int val2;
   friend void swap(C1 &, C2 &);
public:
  void setData(int data){
    val2 = data;
  }  
    void diplay(){
        cout<<val2<<endl;
    }
};

        void swap(C1 &x, C2 &y){
            int temp = x.val1;
            x.val1 = y.val2;
            y.val2 = temp;
        }

int main()
{
    C1 a;
    a.setData(30);
    a.diplay();
    C2 b;
    b.setData(60);  
    b.diplay();
    swap(a, b);
    cout<<"The value of val1 is: "<<endl;
    a.diplay();
    cout<<"The value of val2 is: "<<endl;
    b.diplay();

return 0;
}