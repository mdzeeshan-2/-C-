#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b;
}
int main()
{
    int a, b;
    cout<<"Enter the two number to be multiplied "<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a, b)<<endl;


 return 0;
}