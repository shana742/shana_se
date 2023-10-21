/*
Write a program to swap the two numbers using friend function
without using third variable
*/
#include<iostream>
using namespace std;

class swap_class
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
        cout << "\nBefore Swaping";
        cout << "\nValue of a: " << a;
        cout << "\nValue of b: " << b;
    }

    friend void swap_num(swap_class obj)
    {
        obj.a = obj.a + obj.b;
        obj.b = obj.a - obj.b;
        obj.a = obj.a - obj.b;

        cout << "\nAfter Swaping";
        cout << "\nValue of a: " << obj.a;
        cout << "\nValue of b: " << obj.b;
    }
};

int main()
{
    swap_class obj;
    obj.getdata();
    obj.putdata();
    swap_num(obj);
}
