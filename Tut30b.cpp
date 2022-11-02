#include<iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    int x;
    int y;
    friend void distance(Point o1, Point o2);
public:
    Point(int, int);
    void diplay(){
        cout<<"The Point is: ("<<x<<" , "<<y<<")"<<endl;
    }
   
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
};

void distance(Point o1, Point o2){
    int a = o1.x - o2.x;
    int b = o1.y - o2.y;
    int diff = sqrt(pow(a,2)+pow(b,2));
    cout<<"The difference is: "<<diff<<endl;
    }
int main()
{
  Point P(4, 4);
  P.diplay(); 
  Point Q(8, 8);
  Q.diplay();
  distance(P, Q);
return 0;
}