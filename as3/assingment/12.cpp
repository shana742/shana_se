/*
Write a program to find the max number from given two numbers
using friend function
*/
#include<iostream>
using namespace std;

class max_class
{
    int a, b;

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

    friend void max_num(max_class obj)
    {
        if(obj.a > obj.b)
        {
            cout << "\nMax Number is a: " << obj.a;
        }
        else
        {
            cout << "\nMax Number is b: " << obj.b;
        }
    }
};

int main()
{
    max_class obj;
    obj.getdata();
    obj.putdata();
    max_num(obj);
}
