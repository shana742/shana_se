/*
Write a program to concatenate the two strings using Operator Overloading
*/
#include<iostream>
using namespace std;

class concatenate
{
    string name;

    public:
    void getstring()
    {
        cout << "\nEnter String: ";
        cin >> name;
    }

    void putstring()
    {
        cout << name;
    }

    concatenate operator+(concatenate obj2)
    {
        concatenate obj3;
        obj3.name = name + obj2.name;

        cout << "\nConcatenate String: " << obj3.name;
    }
};

int main()
{
    concatenate obj1;
    obj1.getstring();

    concatenate obj2;
    obj2.getstring();

    cout << "\n1st String: ";
    obj1.putstring();
    cout << "\n2nd String: ";
    obj2.putstring();

    concatenate obj3;
    obj3 = obj1 + obj2;
}
