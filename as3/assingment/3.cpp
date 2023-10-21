/*
Write a program to find the multiplication values and the cubic values using inline function.
*/
#include<iostream>
using namespace std;

inline int mul(int a) {return a * a;}
inline int cube(int a) {return a * a * a;}

int main()
{
    int x, multiplication, cubic;

    cout << "\nEnter Number to find Multiplication and Cubic Number: ";
    cin >> x;

    cout << "\nMultiplication is: " << mul(x);
    cout << "\nCube is: " << cube(x);
}

