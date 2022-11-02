#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout<<i<<endl;
        
    }
    cout<<endl;
    int j = 21, k=31;
    while (j<=30)
    {
        cout<<j<<endl;
        j++;
    }
    cout<<endl;
    // do
    // {
    //     cout<<k<<endl;
    //     k++;
    // } while (k<=50);
    do
    {
        cout<<k<<endl;
        k++;
    } while (false);
    
    return 0;
}
