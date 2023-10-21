/*
Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
*/
#include<iostream>
using namespace std;

class common_area
{
    public:
    void area(float radius)
    {
        float circle_area = 3.14 * radius * radius;
        cout << "\nCircle Area: " << circle_area;
    }

    void area(double lengh, double width)
    {
        double ractangle_area = lengh * width;
        cout << "\nReactangle Area: " << ractangle_area;
    }

    void area(int base, int height)
    {
        int triangle_area = 0.5 * base * height;
        cout << "\nTriangle Area: " << triangle_area;
    }
};

int main()
{
    common_area obj;
    obj.area(10);
    obj.area(2.2, 4.2);
    obj.area(5, 5);
}
