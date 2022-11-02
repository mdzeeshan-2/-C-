#include<iostream>
using namespace std;
int c = 50;
int main()
{
    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum of a and b is: "<<c<<endl;
    cout<<"The global variable : "<<::c<<endl;
    float p = 55.2f;
    long double q = 55.2l;
    cout<<"The size of p is: "<<sizeof(55.2f)<<endl;
    cout<<"The size of q is: "<<sizeof(55.2l)<<endl;
    cout<<endl;
    int d = 88;
    int &e = d;
    cout<<"The value of e is: "<<e<<endl;
    cout<<"The value of d is: "<<d<<endl;
    cout<<endl;
    int l = 23;
    cout<<"The value of l is: "<<float(l)<<endl;
    float m = 23.53;
    cout<<"The value of m is: "<<m<<endl;
    cout<<"The value of l is: "<<int(m)<<endl;
    cout<<endl;
    int n = int(m);
    cout<<"The value of l+m is: "<<l+m<<endl;
    cout<<"The value of l+int(m) is: "<<l+int(m)<<endl;
    cout<<"The value of int(l)+m is: "<<int(l)+m<<endl;
    return 0;
}
