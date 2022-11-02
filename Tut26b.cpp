// #include <iostream>
// #include <conio.h>
// class min;
// class max
// {
// private:
//     int x;

// public:
//     void getData(int data)
//     {
//      cout << "Enter the number: " << endl;
//      cin >> data;
//        x = data;
//     }
//     friend void larger(max, min);
// };
// class min
// {
// private:
//     int y;

// public:
//     void getData(int value)
//     {
//      cout << "Enter the number: " << endl;
//      cin >> value;
//        y = value;
//     }
//     friend void larger(max, min);
// };

// void larger(max o1, min o2)
// {
//     if (o1.x > o2.y)
//     {
//         cout << "The larger number is " << o1.x << endl;
//     }
//     else
//         cout << "The larger number is " << o2.y << endl;
// }
// int main()
// {
//     max a;
//     a.getData();
//     max b;
//     b.getData();
//     larger(a, b);
//     return 0;
// }