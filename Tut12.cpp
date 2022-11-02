#include<iostream>
using namespace std;

int main()
{
    int a = 2;
    int* b = &a;
    int**c = &b;
    cout<<"The adress of a is: "<<&a<<endl;
    cout<<"The adress of a is: "<<b<<endl;
    cout<<"The value at b is: "<<*b<<endl;
     cout<<"The value at b is: "<<c<<endl;
    cout<<"The adress of a is: "<<**c<<endl;

return 0;
}