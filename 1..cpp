/*
WAP to create simple calculator using class
*/

#include<iostream>
using namespace std;

class calculator
{
    int a, b, sum, sub, mul, div, mod;

    public:
    void getdata()
    {
        cout << "\nEnter Value of a: ";
        cin >> a;

        cout << "\nEnter Value of b: ";
        cin >> b;
    }

    void putdata()
    {
        cout << "\nValue of a: " << a;
        cout << "\nValue of b: " << b;
    }

    void summation()
    {
        sum = a+b;
        cout << "\nSummation: " << sum;
    }

    void substraction()
    {
        sub = a-b;
        cout << "\nSubstraction: " << sub;
    }

    void multiplication()
    {
        mul = a*b;
        cout << "\nMultiplication: " << mul;
    }

    void division()
    {
        div = a/b;
        cout << "\nDivision: " << div;
    }

    void modulo()
    {
        mod = a%b;
        cout << "\nModulo: " << mod;
    }
};

int main()
{
    calculator obj;
    obj.getdata();
    obj.putdata();
    obj.summation();
    obj.substraction();
    obj.multiplication();
    obj.division();
    obj.modulo();
}
