/*
Write a program of Addition, Subtraction, Division, Multiplication using constructor.
*/
#include<iostream>
using namespace std;

class calci
{
    int a, b, add, sub, mul, div;

    public:
    calci(int x, int y)
    {
        a = x;
        b = y;
        add = x+y;
        sub = x-y;
        mul = x*y;
        div = x/y;
    }

    void display()
    {
        cout << "\nValue of a: " << a;
        cout << "\nValue of b: " << b;
        cout << "\nAddition: " << add;
        cout << "\nSubstraction: " << sub;
        cout << "\nMultiplication: " << mul;
        cout << "\nDivision: " << div;
    }
};

int main()
{
    int a, b;

    cout << "\nEnter Value of a: ";
    cin >> a;
    cout << "\nEnter Value of b: ";
    cin >> b;

    calci obj(a, b);
    obj.display();
}
