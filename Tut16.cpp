#include<iostream>
using namespace std;
// void swapPointer(int* a, int* b){                        //Callbyreference
// int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void  swapreferecevar(int &a , int &b){                     //Callbyreference
   int temp = a;
    a = b;
    b = temp; 
}
int main()
{
    int a = 10, b = 20;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    // swapPointer(&a, &b);
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    swapreferecevar(a, b);
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
 return 0;
}