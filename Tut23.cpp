#include<iostream>
using namespace std;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter=0;
public:
    void initcounter(void);
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
     cout<<"Enter the item number for "<<counter+1<<endl;
     cin>>itemId[counter];
     cout<<"Enter the price for"<<endl;
     cin>>itemPrice[counter]; 
     counter ++;   
}

void shop:: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"Th Price of the item id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
 shop dukan;
 void initcounter();
 dukan.setPrice();  
 dukan.setPrice();
 dukan.setPrice();
 dukan.displayPrice();  
 return 0;
}