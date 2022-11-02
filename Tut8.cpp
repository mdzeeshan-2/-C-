#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int a = 23;
    // a = 45; <<const variable is already used
    cout<<"The value of a is :"<<a<<endl;
    cout<<endl;
    int p=32, q=3434, r = 3;
    cout<<"The value of p without setw is : "<<p<<endl;
    cout<<"The value of q without setw is : "<<q<<endl;
    cout<<"The value of r without setw is : "<<r<<endl;
    cout<<"The value of p with setw is : "<<setw(4)<<p<<endl;
    cout<<"The value of q with setw is : "<<setw(4)<<q<<endl;
    cout<<"The value of r with setw is : "<<setw(4)<<r<<endl;
    cout<<endl;
    int l=10, m=20;
    int n = l*20 + m - 50;
    cout<<"The value of n is: "<<n<<endl;
    return 0;
}
