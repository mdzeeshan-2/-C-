#include<iostream>
using namespace std;

int main()
{
    int Marks[]={22, 23, 41, 23};
    cout<<"First type to represent Array is: "<<endl;
    cout<<Marks[0]<<endl;
    cout<<Marks[1]<<endl;
    Marks[2]=63;
    cout<<Marks[2]<<endl;
    cout<<Marks[3]<<endl;  
    cout<<endl;
    cout<<"Second type to represent Array is: "<<endl;
    int mathsmarks[4];
    mathsmarks[0]= 42; 
    mathsmarks[1]= 51; 
    mathsmarks[2]= 62; 
    mathsmarks[3]= 45; 
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;  
    cout<<endl;
    cout<<"Third method to represent Array is: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Marks in for loop is "<<Marks[i]<<endl;
    }
    int* p =  Marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *p+1 is "<<*(p+1)<<endl;
    cout<<"The value of *p+2 is "<<*(p+2)<<endl;
    cout<<"The value of *p+3 is "<<*(p+3)<<endl;

    
return 0;
}