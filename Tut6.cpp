#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    cout<<"The value of a-b "<<a-b<<endl;
    cout<<"The value of a+b "<<a+b<<endl;
    cout<<"The value of a/b "<<a/b<<endl;
    cout<<"The value of a%b "<<a%b<<endl;
    cout<<"The value of a*b "<<a*b<<endl;
    cout<<"The value of a++ "<<a++<<endl;
    cout<<"The value of a-- "<<a--<<endl;
    cout<<"The value of ++a "<<++a<<endl;
    cout<<"The value of --a "<<--a<<endl;
    cout<<endl;
    cout<<"The value of a==b "<<(a==b)<<endl;
    cout<<"The value of a!=b "<<(a!=b)<<endl;
    cout<<"The value of a<=b "<<(a<=b)<<endl;
    cout<<"The value of a>=b "<<(a>=b)<<endl;
    cout<<"The value of a<b "<<(a<b)<<endl;
    cout<<"The value of a>b "<<(a>b)<<endl;
    cout<<endl;
    cout<<"The value of logical operator and is (a==b)&&(a>b) "<<((a==b)&&(a>b))<<endl; 
    cout<<"The value of logical operator or is (a==b)||(a>b) "<<((a==b)||(a>b))<<endl; 
    cout<<"The value of logical operator not is (!(a==b)) "<<(!(a==b))<<endl; 
}