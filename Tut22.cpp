#include<iostream>
#include<string>
using namespace std;
class nesting
{
private:
    string c;
public:
   void read(void);
   void chk_bin(void);
   void ones_compliment(void);
   void display(void);
};
void nesting :: read(void)
{
cout<<"Enter the number: "<<endl;
cin>>c;
}
void nesting :: chk_bin(void){
    for (int i = 0; i < c.length(); i++)
    {
         if( c.at(i)!='0' && c.at(i)!='1' )
        {
           cout<<"This is not binary"<<endl;
           exit(0);
        }
    }
    
}
void nesting :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < c.length(); i++)
    {
        if (c.at(i)=='0')
        {
            c.at(i)='1';
        }
        else
            c.at(i)='0';
 
    }
    
}
void nesting :: display(void){
    cout<<"Display the binary number: "<<endl;
    for (int i = 0; i < c.length(); i++)
    {
        
        cout<<c.at(i);
    }
    cout<<endl;
}
int main()
{
 nesting zeeshan;   
 zeeshan.read();
//  zeeshan.chk_bin();
 zeeshan.ones_compliment();
 zeeshan.display();
 return 0;
}