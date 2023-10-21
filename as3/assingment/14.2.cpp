/*
Write a program of to sort the array using templates.
*/

#include<iostream>
using namespace std;

template<class temp>

class sort_array
{
    temp array[50], num, max;

    public:
    void get_array()
    {
        cout << "\nEnter Element of array: ";
        cin >> num;

        for(temp i=0; i<num; i++)
        {
            cout << "\nEnter Arrays Element: ";
            cin >> array[i];
        }
    }

    void ascending_array()
    {
        for(temp i=0; i<num; i++)
        {
            max=array[i];
            for(temp j=i; j<num; j++)
            {
                if(array[j]<max)
                {
                    max = array[j];
                    array[j] = array[i];
                    array[i] = max;
                }
            }
        }
    }

    void put_array()
    {
        for(temp i=0; i<num; i++)
        {
            cout << array[i];
        }
    }
};

int main()
{
    sort_array<int> obj;
    obj.get_array();
    obj.ascending_array();
    obj.put_array();
}
