#include<iostream>
using namespace std;
int Volume(int a){
    return a * a * a;
}
int Volume(double r, int h){
      return (3.14 * r * h); 
}
int main()
{
    int n;
    cout<<"for volume of Cylinder Press 0"<<endl;
    cout<<"For volume of Cube Prss 1"<<endl;
    cin>>n;
    if (n==1)
    {
        int a;
        cout<<"Enter the side of cube: "<<endl;
        cin>>a;
        cout<<"The Volume of cube is: "<<Volume(a)<<endl;
    }
    else
    {
        double r;
        int h;
        cout<<"Enter the radius of Cylinder: "<<endl;
        cin>>r;
        cout<<"Enter the height of Cylinder: "<<endl;
        cin>>h;
        cout<<"The Volume of Cylinder is: "<<Volume(r , h)<<endl;
    }
    
        
 return 0;
}