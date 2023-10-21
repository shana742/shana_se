/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class person
{
    protected:
    string name, age;
};

class student: public person
{
    protected:
    int percentage;
};

class teacher: public student
{
    protected:
    int salary;

    public:
    void getdata()
    {
        cout << "\nEnter Person Name: ";
        cin >> name;
        cout << "\nEnter Person Age: ";
        cin >> age;
        cout << "\nEnter Your Percentage: ";
        cin >> percentage;
        cout << "\nEnter Salary: ";
        cin >> salary;
    }

    void putdata()
    {
        cout << "\nPerson Name: " << name;
        cout << "\nPerson Age: " << age;
        cout << "\nYour Percentage: " << percentage;
        cout << "\nSalary: " << salary;
    }
};

int main()
{
    teacher obj;
    obj.getdata();
    obj.putdata();
}
