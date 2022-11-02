#include<iostream>
using namespace std;
int global=40;
void globalcall(){
    int a;
    cout<<global;
}
int main(){
    int F=10, A=77;
    char C = 'a';
    float P = 3.14;
    int global=20;
    globalcall();
    bool is_true= true;
     bool is_false= false;
    cout<<global;
    cout<<is_true;
    cout<<is_false;
    cout<<"\nRoll number of Farhan is "<<F<<"\nRoll number of Ayushman is "<<A;
    cout<<"\nThe value of C is "<<C;
    cout<<"\nThe value of pi is "<<P;
    
    return 0;
}