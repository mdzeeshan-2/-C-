#include<iostream>
using namespace std;
class Y; 
class X
{
private:
   int data;
public:
    void setData( int values){
        data = values;
    }
    friend void add(X, Y);
};
class Y
{
private:
   int num;
public:
    void setData( int values){
        num = values;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2){
    cout<<"The Sum of the two objects is: "<<o1.data + o2.num<<endl;
}

int main()
{
    X a1;
    a1.setData(3);
    Y b1;
    b1.setData(10);
    add(a1, b1);
     
 return 0;
}