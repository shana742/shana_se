/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading.
*/
#include<iostream>
using namespace std;

class math
{
    public:
    void math_function(int x, int y)
    {
        cout << "\nAddition: " << x+y;
        cout << "\nSubstraction: " << x-y;
        cout << "\nMultiplication: " << x*y;
        cout << "\nDivision: " << x/y;
    }

    void math_function(double x, double y)
    {
        cout << "\nAddition: " << x+y;
        cout << "\nSubstraction: " << x-y;
        cout << "\nMultiplication: " << x*y;
        cout << "\nDivision: " << x/y;
    }
};

int main()
{
    math obj;
    obj.math_function(20, 10);
    obj.math_function(5.5, 5.5);
}
