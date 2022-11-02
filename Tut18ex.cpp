#include<iostream>
using namespace std;
int fib(int a){
    static int a1 = 0, a2=1, a3;
    if(a>0){
    a3 = a1+a2;
    a1 = a2;
    a2 = a3;
    cout<< a3<<" ";
    fib(a-1);
    }
}
int main()
{
  int n;
  cout<<"Enter the number of element for finacci series "<<endl;
  cin>>n;
  cout<<"Fibonacci series: "<<"0 "<<"1 ";
  fib(n-2);

 return 0;
}