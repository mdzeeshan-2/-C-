#include<iostream>
using namespace std;
class student : public exam
{
private:
int roll_number;
public:
   void set_roll_number(int);
   void get_roll_number(void);
};

void student::set_roll_number(int r)
{
    r = roll_number;
}

void student:: get_roll_number(void)
{
    cout<<"The roll number of the student is: "<<roll_number<<endl;
}

class exam :public student
{
protected:
   float maths;
   float physics;
   float chemistry;
public:
  void set_marks(float, float, float);
   void get_marks(void);  
};

void exam::set_marks(float m1, float m2, float m3)
{
    m1 = maths;
    m2 = physics;
    m3 = chemistry;
}

void exam::get_marks(void)
{
    cout<<"Marks of the student in Maths: "<<maths<<endl;
    cout<<"Marks of the student in Physics: "<<physics<<endl;
    cout<<"Marks of the student in Chemistry: "<<chemistry<<endl;
}

class result : public exam
{
private:
  float percentage;
public:
   void display(){
    get_roll_number();
    get_marks();
    cout<<"The percentage of the student in all three subject is: "<<(maths + physics + chemistry)/3<<"%"<<endl;
   }
};


int main()
{
   result zeemshan;
   zeemshan.set_roll_number(2060078);  
   zeemshan.set_marks(69.73, 69.02, 69.82);
   zeemshan.display();
 return 0;
}