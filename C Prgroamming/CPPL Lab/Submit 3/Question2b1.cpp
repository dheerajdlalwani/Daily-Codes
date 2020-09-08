#include <iostream>
using namespace std;

class Adder
{
public:
    Adder()
    {
        Total = 0;
    }
    void AddMarks(int marks)
    {
        Total += marks;
    }
    int getTotal()
    {
        return Total;
    }

private:
    int Total;
};

int main()
{
    Adder a;
    int n, i;
    double marks, percentage;
    cout << "Enter the number of subjects : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter marks of Subject " << i << " : ";
        cin >> marks;
        a.AddMarks(marks);
    }
    percentage = (a.getTotal() * 100.0) / n / 100.0;
    cout << "Total marks : " << a.getTotal() << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    return 0;
}

// Implement the concept of encapsulation using Public and Private access specifier, to calculate
// total marks of a student across five subjects.
// Use the following variables and functions in Class Adder:
// 1- public : Adder( ). //constructor
//  void AddMarks( int marks )
//  int getTotal( )
// 2-Private: int Total
