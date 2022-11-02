#include<iostream>
using namespace std;
int main()
{ 
    int a, c;
    cout<<"Enter your age: "<<endl;
    cin>>a;
    cout<<"Enter your class: "<<endl;
    cin>>c;
    if ((a<18)&&(a>0))
    {
        cout<<"You are not 18+"<<endl;
    }
    else if (a==18)
    {
        cout<<"You are exact 18"<<endl;
    }
      else if (a<1)
    {
        cout<<"You are not yet born"<<endl;
    }
    else
    {
        cout<<"You are 18+"<<endl;
    }
    switch (c)
    {
    case 10:
       cout<<"How was your 10th boards exam"<<endl;
        break;
    case 11:
       cout<<"Science, Commerce or arts?"<<endl;
        break;
    case 12:
       cout<<"What next? Engineering or Graduation"<<endl;
        break;
    default:
    cout<<"Choose the class between 10 to 12"<<endl;
        break;
    }
    
    return 0;
}