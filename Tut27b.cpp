#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    int sumcomcomplex(Complex, Complex);
};

class Complex
{
private:
    int a;
    int b;
    // if we want to make friend to entire class of calculator it means every function of calculator can use the private function of Complex then
    friend class Calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getData()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumcomcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setData(2, 4);
    o1.getData();

    o2.setData(5, 8);
    o2.getData();

    Calculator o3;
    int sum = o3.sumrealcomplex(o1, o2);
    cout << sum << endl;
    int com = o3.sumcomcomplex(o1, o2);
    cout << com;
    return 0;
}