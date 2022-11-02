#include<iostream>
using namespace std;
class Bankdeposit
{
private:
    int Principal;
    float interestRate;
    int year;
    float returnValue;
public:
    Bankdeposit(){}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
    
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{
    Principal = p;
    year = y;
    interestRate = r;
    returnValue = Principal; 
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
    
}


Bankdeposit::Bankdeposit(int p, int y, int r)
{
    Principal = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = Principal; 
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}
void Bankdeposit:: show(){
    cout<<"Principal amount is "<<Principal<<endl
    <<"Return value is: "<<returnValue<<endl
    <<"after "<<year<<" 2years"<<endl;
}

int main()
{
     Bankdeposit bd1, bd2, bd3;
     int p, y, R;
     float r;
     cout<<"Enter the value of p, y, r"<<endl;
     cin>>p>>y>>r;
     bd1 = Bankdeposit(p, y, r);
     bd1.show();

    cout<<"Enter the value of p, y, R"<<endl;
     cin>>p>>y>>R;
     bd1 = Bankdeposit(p, y, R);
     bd1.show();

return 0;
}