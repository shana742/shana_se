/*
Write a Program of Two 1D Matrix Addition using Operator Overloading
*/
#include<iostream>
using namespace std;

class array_matrix
{
    int array[2];

    public:
    void get_array()
    {
        for(int i=0; i<2; i++)
        {
            cout << "\nEnter Elements of array: ";
            cin >> array[i];
        }
    }
    void put_array()
    {
        for(int i=0; i<2; i++)
        {
            cout << array[i];
            cout << " ";
        }
    }

    array_matrix operator+(array_matrix obj2)
    {
        array_matrix obj3;
        for(int i=0; i<2; i++)
        {
             obj3.array[i] = array[i] + obj2.array[i];
        }
        for(int i=0; i<2; i++)
        {
            cout << obj3.array[i];
            cout << " ";
        }
    }
};

int main()
{
    array_matrix obj1;          
    obj1.get_array();           

    array_matrix obj2;         
    obj2.get_array();           

    cout << "\nArray1: ";
    obj1.put_array();           
    cout << "\nArray2: ";
    obj2.put_array();           
    
    cout << "\nAddition: ";
    array_matrix obj3;          
    obj3 = obj1 + obj2;        
    
}
