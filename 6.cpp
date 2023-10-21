/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;

class cricketer
{
    protected:
    int run1, run2;

    public:
    void inputdata()
    {
        cout << "\nEnter Run1 and Run2: ";
        cin >> run1 >> run2;
    }

    void outputdata()
    {
        cout << "\nRun1: " << run1 << "\nRun2: " << run2;
    }
};

class batsman: public cricketer
{
    protected:
    int total_runs, average_runs, best_performance;

    public:
    void averageruns()
    {
        total_runs = run1 + run2;
        average_runs = total_runs / 2;
    }

    void bestperformance()
    {
        if(run1>run2)
        {
            cout << "\nBest Performance given by Run1";
        }
        else
        {
            cout << "\nBest Performance given by Run2";
        }
    }

    void display()
    {
        cout << "\nTotal Runs: " << total_runs;
        cout << "\nAverage Runs: " << average_runs;
    }
};

int main()
{
    batsman obj;
    obj.inputdata();
    obj.outputdata();
    obj.averageruns();
    obj.display();
    obj.bestperformance();
}
