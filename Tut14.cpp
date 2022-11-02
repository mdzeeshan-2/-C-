#include <iostream>
using namespace std;
typedef struct students
{
    int studentRoll;
    char studentName;
    float studentId;
} ep;

int main()
{
    ep classten;
    classten.studentRoll = 10;
    classten.studentName = 'c';
    classten.studentId = 10.01;
    cout << "The name of the student " << classten.studentName << endl;
    cout << "The Roll of the student " << classten.studentRoll << endl;
    cout << "The ID of the student " << classten.studentId << endl;
    cout<<endl;

    return 0;
}