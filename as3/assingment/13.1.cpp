/*
Write a program of to swap the two values using templates.
*/
#include<iostream>
using namespace std;

template<class swap>
class swaping
{
    public:
    void swap_num(swap num1, swap num2)
    {
        cout << "\nBefore Swaping num1: " << num1 << " num2: " << num2;

        swap temp;
        temp = num1;
        num1 = num2;
        num2 = temp;

        cout << "\nAfter Swaping num1: " << num1 << " num2: " << num2;
    }
};

int main()
{
    swaping<int> obj;
    obj.swap_num(10,20);
}
